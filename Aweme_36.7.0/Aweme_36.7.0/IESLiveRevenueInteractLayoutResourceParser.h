@class NSString, IESLiveRevenueInteractLayoutConfigModel, IESLiveRevenueInteractLinkerLayoutConfig;

@interface IESLiveRevenueInteractLayoutResourceParser : NSObject <IESLiveLinkmicLayoutConfigParser>

@property (weak, nonatomic) IESLiveRevenueInteractLinkerLayoutConfig *config;
@property (retain, nonatomic) IESLiveRevenueInteractLayoutConfigModel *model;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRatioFrame;
@property (nonatomic) double baseShortTouchHeight;
@property (nonatomic) double bizTopOffset;
@property (copy, nonatomic) NSString *originDeviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interactProvider;
- (void)logEvent:(id)a0 withParams:(id)a1;
- (id)configModelWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)isScreenshotHorizontal;
- (BOOL)isClipMode;
- (BOOL)isGameFull;
- (double)defaultShortTouchHeight;
- (double)additionalTopHeight;
- (void)transformToRealFrame:(id)a0;
- (BOOL)isInGameSEI;
- (BOOL)isInMultiGameSEI;
- (void).cxx_destruct;

@end
