@class DUXBasicSheet, NSString, NSDictionary, YYLabel;

@interface CAKAlbumAIMemoriesPermissionViewController : UIViewController <DUXSheetDelegate>

@property (copy, nonatomic) NSDictionary *trackInfo;
@property (nonatomic) long long authChangeScene;
@property (weak, nonatomic) DUXBasicSheet *sheetContainer;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) YYLabel *detailLabel;
@property (nonatomic) BOOL forceUseLightTheme;
@property (copy, nonatomic) id /* block */ permissionChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithType:(unsigned long long)a0 authChangeScene:(long long)a1 trackInfo:(id)a2 permissionStatusChangedBlock:(id /* block */)a3;
+ (id)showWithType:(unsigned long long)a0 authChangeScene:(long long)a1 forceUseLightTheme:(BOOL)a2 trackInfo:(id)a3 permissionStatusChangedBlock:(id /* block */)a4;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidDragToDismiss:(id)a0;
- (double)sheetHeight;
- (void)trackClickWithType:(id)a0;
- (void)jumpToAIMemoriesLawPage;
- (void)handleScreenRotation;
- (void)setupUIForDefaultType;
- (void)setupUIForFirstTimeType;
- (id)detailTextForDefaultType;
- (id)detailTextForFirstTimeType;
- (double)fitHeightWithWidth:(double)a0;
- (double)fitHeightWithWidthForDefaultType:(double)a0;
- (double)fitHeightWithWidthForFirstTimeType:(double)a0;
- (id)titleStringFontForFirstTimeType;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)detailText;
- (void)viewDidLoad;
- (void)setupUI;
- (id)detailFont;

@end
