@class NSArray, CreateInfoResponse_FansClubConfig, IESLiveFansClubModeSwitchApi, NSString, NSNumber;

@interface IESLiveAnchorFansClubModeSettingStore : NSObject

@property (retain, nonatomic) IESLiveFansClubModeSwitchApi *fansClubModeSwitchApi;
@property (retain, nonatomic) CreateInfoResponse_FansClubConfig *fansClubConfig;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *modes;
@property (retain, nonatomic) NSNumber *currentMode;
@property (retain, nonatomic) NSString *notice;
@property (retain, nonatomic) NSString *ruleTips;
@property (retain, nonatomic) NSString *ruleURL;
@property (nonatomic) BOOL canSwitchMode;
@property (retain, nonatomic) NSString *disableToast;
@property (retain, nonatomic) NSString *switchAlertTitle;
@property (retain, nonatomic) NSString *switchAlertText;
@property (retain, nonatomic) NSString *switchAlertHighLightText;
@property (copy, nonatomic) id /* block */ switchFansClubModeBlock;

- (void)switchFansClubMode:(id)a0 fromMode:(id)a1 completion:(id /* block */)a2;
- (void)updateWithFansClubConfig:(id)a0;
- (id)initWithFansClubConfig:(id)a0;
- (void).cxx_destruct;

@end
