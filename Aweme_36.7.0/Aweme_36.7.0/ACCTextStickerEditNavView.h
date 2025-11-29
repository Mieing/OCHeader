@class AWETextTopBar, NSArray, NSString, ACCAnimatedButton;
@protocol ACCTextStickerEditNavViewDelegate;

@interface ACCTextStickerEditNavView : UIView <AWETextToolStackViewProtocol>

@property (retain, nonatomic) ACCAnimatedButton *saveButton;
@property (retain, nonatomic) ACCAnimatedButton *cancelButton;
@property (retain, nonatomic) AWETextTopBar *topTextToolBar;
@property (nonatomic) unsigned long long editStyle;
@property (retain, nonatomic) NSArray *itemIdentityList;
@property (weak, nonatomic) id<ACCTextStickerEditNavViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAllBarItems;
- (void)didClickedCancelButton;
- (void)didClickedSaveButton;
- (void)setupUIWithCancel:(BOOL)a0;
- (void)updateBarItemWithItemIdentity:(id)a0;
- (void)registerItemConfigProvider:(id /* block */)a0 clickHandler:(id /* block */)a1 forItemIdentity:(id)a2;
- (struct CGPoint { double x0; double x1; })itemViewCenterOffsetWithItemIdentity:(id)a0;
- (id)getItemViewWithItemIdentity:(id)a0;
- (id)initWithCancel:(BOOL)a0 editStyle:(unsigned long long)a1 itemIdentityList:(id)a2;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
