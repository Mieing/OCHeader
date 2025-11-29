@class NSString, RACSignal, RACSubject, NSNumber;
@protocol ACCTextStickerSecondaryPageDelegate;

@interface ACCTextStickerServiceImpl : NSObject <ACCTextStickerServiceProtocol>

@property (retain, nonatomic) RACSubject *startEditTextStickerSubject;
@property (retain, nonatomic) RACSubject *endEditTextStickerSubject;
@property (retain, nonatomic) RACSubject *selectFlashTopicSubject;
@property (retain, nonatomic) RACSubject *editTexStickerReaderSubject;
@property (weak, nonatomic) id<ACCTextStickerSecondaryPageDelegate> delegate;
@property (nonatomic) BOOL triggerShowLoadingView;
@property (retain, nonatomic) NSNumber *isEditing;
@property (retain, nonatomic) NSNumber *showingEditNavBar;
@property (retain, nonatomic) NSNumber *isInTextStickerSecondaryVC;
@property (nonatomic) struct CGPoint { double x; double y; } editContainerOffset;
@property (nonatomic) struct CGSize { double width; double height; } editContainerBottomSize;
@property (readonly, nonatomic) RACSignal *startEditTextStickerSignal;
@property (readonly, nonatomic) RACSignal *endEditTextStickerSignal;
@property (readonly, nonatomic) RACSignal *selectFlashTopicSignal;
@property (readonly, nonatomic) RACSignal *editTexStickerReaderSignal;
@property (nonatomic) BOOL applyWithoutImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fixPositionWithSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)startEditTextStickerView;
- (void)refreshTextStickerEditView;
- (void)pauseCurrentEditingStickerIfNeedWith:(id)a0;
- (void)setFakeTextViewFirstResponder;
- (void)removeTextReadingForStickerView:(id)a0;
- (double)textStickerEditToolBarHeight;
- (void)editTextStickerReader:(id)a0;
- (void)startEditTextStickerView:(id)a0;
- (void)endEditTextStickerView:(id)a0;
- (void)selectFlashTopic:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
