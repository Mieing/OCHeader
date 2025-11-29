@class NSString;

@interface MMWebViewAISearchHalfScreenConfig : NSObject <PBCoding>

@property (copy, nonatomic) NSString *query;
@property (nonatomic) unsigned int scene;
@property (nonatomic) float halfPageHeightRatio;
@property (nonatomic) BOOL hiddenSearchHeader;
@property (retain, nonatomic) NSString *thirdExtParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_halfPageHeightRatio;
+ (void)PBArrayAdd_hiddenSearchHeader;
+ (void)PBArrayAdd_thirdExtParam;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
