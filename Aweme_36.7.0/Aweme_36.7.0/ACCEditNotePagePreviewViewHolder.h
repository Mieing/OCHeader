@class ACCSequenceEditPreviewWrapperView, NSString, UIView, ACCEditNotePagePreviewViewState;

@interface ACCEditNotePagePreviewViewHolder : NSObject <ACCEditUIViewHolderProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) ACCSequenceEditPreviewWrapperView *previewWarpperView;
@property (retain, nonatomic) ACCEditNotePagePreviewViewState *viewState;
@property (weak, nonatomic) id component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)componentClass;

- (void)bindObserve;
- (id)initWithViewState:(id)a0;
- (void)createPreviewWith:(id)a0 weakMediaView:(id)a1 chooseFrameDelegate:(id)a2;
- (void)configPreviewWithContainerView:(id)a0;
- (void).cxx_destruct;

@end
