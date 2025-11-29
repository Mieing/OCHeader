@class NSArray, CKGenericTemplateModel, NSString, NSNumber;

@interface ACCEditTextModeTemplateModel : NSObject

@property (copy, nonatomic) NSArray *styleIds;
@property (copy, nonatomic) NSNumber *currentStyleId;
@property (copy, nonatomic) NSArray *dimensionsArray;
@property (readonly, nonatomic) CKGenericTemplateModel *genericTemplate;
@property (readonly, copy, nonatomic) NSString *templateId;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSNumber *nextStyleId;

- (id)initWithGenericTemplate:(id)a0;
- (void)appendStyleIds:(id)a0;
- (void)updateDimensionsArray:(id)a0;
- (void)cleanStyleIds;
- (BOOL)isLastStyle;
- (BOOL)hasMoreStyle;
- (void)switchToNext;
- (long long)styleRequestCount;
- (long long)limitStyleCount;
- (long long)totalStyleCount;
- (void)updateHistoryArray:(id)a0;
- (void).cxx_destruct;

@end
