@class NSArray, NSString, NSDictionary, NSNumber, IESLLPOIProductSecondPageModel;

@interface IESLLPOIProductListModel : NSObject

@property (retain, nonatomic) NSArray *spuList;
@property (retain, nonatomic) NSNumber *cacheHeight;
@property (retain, nonatomic) NSArray *expandSectionSpuList;
@property (nonatomic) long long expandedPageIndex;
@property (copy, nonatomic) NSString *lynxUrl;
@property (nonatomic) long long type;
@property (readonly, nonatomic) double defaultItemHeight;
@property (nonatomic) long long currentModuleIndex;
@property (copy, nonatomic) NSString *moduleID;
@property (nonatomic) long long startIndex;
@property (retain, nonatomic) NSDictionary *extraSpuParams;
@property (nonatomic) double absoluteMargin;
@property (retain, nonatomic) IESLLPOIProductSecondPageModel *secondPageModel;

- (id)buildExpandSpuList;
- (id)buildSubSpuList;
- (id)initWithSpuList:(id)a0 type:(long long)a1;
- (void)updateTotalHeight:(double)a0;
- (void)buildNextPageModel;
- (BOOL)expandedPageNoMore;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (double)totalHeight;

@end
