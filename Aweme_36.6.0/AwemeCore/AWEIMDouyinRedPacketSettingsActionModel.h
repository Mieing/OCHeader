@class NSString, NSArray, AWEIMDouyinRedPacketSwitchBtnConfigModel, AWEIMDouyinRedPacketCoverModel;

@interface AWEIMDouyinRedPacketSettingsActionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *actionId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *availableDuration;
@property (retain, nonatomic) NSArray *coverList;
@property (copy, nonatomic) NSString *defaultCoverId;
@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *defaultSelectedCover;
@property (copy, nonatomic) NSArray *amountList;
@property (copy, nonatomic) NSString *defaultRandomCoverId;
@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *defaultRandomCover;
@property (nonatomic) unsigned long long refreshMode;
@property (retain, nonatomic) AWEIMDouyinRedPacketSwitchBtnConfigModel *switchTypeBtnConfig;
@property (nonatomic) BOOL redDotTipsShow;
@property (copy, nonatomic) NSString *selectedGuideDesc;

+ (id)coverListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
