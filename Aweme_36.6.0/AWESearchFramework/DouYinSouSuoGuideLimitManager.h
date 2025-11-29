@class NSString, NSArray;

@interface DouYinSouSuoGuideLimitManager : NSObject

@property (copy, nonatomic) NSString *lastShowItemId;
@property (readonly, copy, nonatomic) NSString *lynxSchema;
@property (readonly, copy, nonatomic) NSString *lynxChannel;
@property (readonly, copy, nonatomic) NSArray *lynxCheckList;
@property (readonly, nonatomic) BOOL isClientFrequencyControlEnabled;

+ (id)shareInstance;

- (id)lynxConfig;
- (void)markGuideHasDisplayedForAweme:(id)a0;
- (BOOL)shouldShowGuideForAweme:(id)a0;
- (id)guideAnchorListModelFromAweme:(id)a0;
- (BOOL)isGuideEnabled;
- (BOOL)shouldShowGuideForSpecialAppModes;
- (BOOL)shouldShowGuideByLocalReturnForAweme:(id)a0;
- (BOOL)shouldShowGuideForBottomArea;
- (BOOL)shouldShowGuideForLynxResources;
- (BOOL)shouldShowGuideForClientFrequencyControl:(id)a0;
- (BOOL)isLocalReturnEnabled;
- (void).cxx_destruct;

@end
