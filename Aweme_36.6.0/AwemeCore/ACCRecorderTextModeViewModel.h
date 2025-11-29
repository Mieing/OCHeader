@class ACCCameraSubscription, NSString, RACSubject, RACSignal, AWEStoryTextImageModel;

@interface ACCRecorderTextModeViewModel : ACCRecorderViewModel <ACCTextModeService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) RACSubject *textModeVCDidAppearSubject;
@property (retain, nonatomic) RACSubject *beginEditStickerSubject;
@property (nonatomic) BOOL editingState;
@property (weak, nonatomic) AWEStoryTextImageModel *textModel;
@property (readonly, nonatomic) RACSignal *textModeVCDidAppearSignal;
@property (readonly, nonatomic) RACSignal *beginEditTextStickerSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginEditTextSticker;
- (void)stickerTextModelDidChange;
- (void)send_textModeVCDidAppearSignal;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
