@class AWECoverTextPackageView, NSString, UIView, AWECoverTextStoryTextView, AWECoverTextPlainTextView;
@protocol ACCStickerContainerProtocol, AWECoverTextStickerProtocol;

@interface AWECoverTextStickerView : UIView <ACCStickerContentProtocol>

@property (nonatomic) double fontScale;
@property (nonatomic) double currentScale;
@property (retain, nonatomic) UIView<AWECoverTextStickerProtocol> *currentView;
@property (retain, nonatomic) AWECoverTextStoryTextView *storyView;
@property (retain, nonatomic) AWECoverTextPackageView *packageView;
@property (retain, nonatomic) AWECoverTextPlainTextView *plainTextView;
@property (readonly, nonatomic) AWECoverTextStoryTextView *storyTextView;
@property (nonatomic) BOOL canEdit;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentDidUpdateToScale:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fontScale:(double)a1;
- (void)setPlaceholderHide:(BOOL)a0;
- (id)viewWithModel:(id)a0;
- (void)updateEditInfo:(id)a0;
- (void).cxx_destruct;
- (void)updateBounds;

@end
