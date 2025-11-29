@class AWEBackgroundPlaySettingsCellModel, NSString, NSDictionary, AWEAwemeModel;
@protocol AWEBackgroundPlayAudioConfigDelegate;

@interface AWEBackgroundPlayPIPConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEBackgroundPlaySettingsCellModel *allSceneCellModel;
@property (retain, nonatomic) AWEBackgroundPlaySettingsCellModel *pinchSceneCellModel;
@property (copy, nonatomic) NSDictionary *logExtraParams;
@property (weak, nonatomic) id<AWEBackgroundPlayAudioConfigDelegate> delegate;
@property (nonatomic) long long section;
@property (nonatomic) BOOL hideToast;
@property (nonatomic) BOOL hideIcon;
@property (copy, nonatomic) NSString *enterMethod;

+ (BOOL)shouldShowBGPlayPIPSwitchWithModel:(id)a0;

- (BOOL)iPhoneGlobalPiPSwitchDefaultState;
- (void)switchDidChange:(BOOL)a0;
- (id)configCellModelWithAwemeModel:(id)a0;
- (id)configSwitchCellModel;
- (id)configSupportAllSceneCellModel;
- (id)configSupportPinchSceneCellModel;
- (id)cellModelWithAwemeModel:(id)a0;
- (id)cellModelsForPinchSwitchWithAwemeModel:(id)a0;
- (void)trackPiPSwitchShow;
- (void)trackPiPSwitchClickToStatus:(BOOL)a0;
- (void).cxx_destruct;

@end
