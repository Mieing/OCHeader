@class NSArray, AWEECOMIMFootDescFoldUIModel, AWEECOMIMUserConfig, AWEECOMIMFooterTipsModel, AWEECOMIMFootDescActionButtonStyle;

@interface AWEECOMIMFootDescActionUIModel : NSObject

@property (readonly, nonatomic) BOOL shouldShow;
@property (nonatomic) unsigned long long showType;
@property (retain, nonatomic) AWEECOMIMFooterTipsModel *footerTipModel;
@property (retain, nonatomic) AWEECOMIMUserConfig *userConfig;
@property (nonatomic) BOOL showSwitchHuman;
@property (nonatomic) BOOL disableOldByFold;
@property (copy, nonatomic) NSArray *originalActionItemList;
@property (copy, nonatomic) NSArray *finalActionItemList;
@property (nonatomic) BOOL disableByAggregation;
@property (nonatomic) BOOL disableByFold;
@property (retain, nonatomic) AWEECOMIMFootDescFoldUIModel *foldModel;
@property (retain, nonatomic) AWEECOMIMFootDescActionButtonStyle *buttonStyle;

- (void)buildFinalActionItemList;
- (void).cxx_destruct;
- (BOOL)shouldShow;

@end
