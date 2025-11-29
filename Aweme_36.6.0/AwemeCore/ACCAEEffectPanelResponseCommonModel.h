@class NSArray, NSString;

@interface ACCAEEffectPanelResponseCommonModel : NSObject

@property (retain, nonatomic) NSArray *categoryList;
@property (retain, nonatomic) NSArray *effectModels;
@property (copy, nonatomic) NSString *versionCode;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long sortingPosition;

- (void).cxx_destruct;

@end
