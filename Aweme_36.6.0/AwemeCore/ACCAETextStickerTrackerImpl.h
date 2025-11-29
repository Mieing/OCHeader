@class NSString, ACCAEDataRepositoryInputData;
@protocol DVETrackEventProtocol;

@interface ACCAETextStickerTrackerImpl : NSObject <ACCAETextStickerTracker>

@property (weak, nonatomic) id<DVETrackEventProtocol> dveTracker;
@property (weak, nonatomic) ACCAEDataRepositoryInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (void)menuTextClick;
- (void)menuAddTextClick;
- (void)inputSwitchToKeyboardManually:(BOOL)a0;
- (void)finishInputByClickConfirm:(BOOL)a0 isTextTemplate:(BOOL)a1;
- (void)inputSwitchToStyleManually:(BOOL)a0 isClick:(BOOL)a1;
- (void)inputSwitchToTextTemplateManually:(BOOL)a0 isClick:(BOOL)a1;
- (void)selectTextStyle:(unsigned long long)a0;
- (void)selectAlignment:(long long)a0;
- (void)inputSwitchToFontWithIsClick:(BOOL)a0;
- (void)selectTextFont:(id)a0 isUseCache:(BOOL)a1;
- (void)editTextClickWithType:(long long)a0;
- (void)menuReadTextClickHasTTS:(BOOL)a0;
- (void)menuStyleClick;
- (void)copyClickWithType:(long long)a0;
- (void)deleteClickWithType:(long long)a0;
- (void)menuApplyToClip;
- (void)menuApplyToAllClips;
- (void)tapSticker;
- (void)rotationStickerWithZoomType:(id)a0 hasRotation:(BOOL)a1;
- (void)rotationStickerWithPan;
- (void)dragSticker;
- (void)socialWithEntranceName:(id)a0 isMention:(BOOL)a1;
- (void)clearTextTemplateWithExtraParams:(id)a0;
- (id)initWithDVETracker:(id)a0 inputData:(id)a1;
- (id)actionEnterMethodWithType:(long long)a0;
- (void).cxx_destruct;
- (void)selectColor:(id)a0;

@end
