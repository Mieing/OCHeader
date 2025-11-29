@class NSString, MMScrollableActionSheetContainerView, UIView;
@protocol MMScrollableActionSheetDelegate;

@interface MMScrollableActionSheet : MMUIView <MMScrollableActionSheetContainerViewDelegate, IUiUtilExt>

@property (retain, nonatomic) UIView *transparentView;
@property (weak, nonatomic) id<MMScrollableActionSheetDelegate> delegate;
@property (retain, nonatomic) MMScrollableActionSheetContainerView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)setupContainerView;
- (void)setupTransparentView;
- (void)showInView:(id)a0;
- (void)showInTopMostView;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)setHorizontalRowInfoList:(id)a0 atRow:(unsigned int)a1;
- (void)addOrUpdateHorizontalRowItemInfo:(id)a0 atRow:(unsigned int)a1;
- (void)appendRow0HorizontalItemWithItemType:(unsigned int)a0 iconImage:(id)a1 title:(id)a2;
- (void)appendRow1HorizontalItemWithItemType:(unsigned int)a0 iconImage:(id)a1 title:(id)a2;
- (void)layoutSubviews;
- (void)onTappedTransparent;
- (void)onTappedItemInfo:(id)a0;
- (void)onTappedCancel;
- (void)onMainWindowFrameChanged;
- (void).cxx_destruct;

@end
