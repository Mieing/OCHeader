@class NSString, DVEButton, DVETrackPanelContext, UIView;
@protocol DVECoreVideoProtocol, DVETrackEventProtocol, DVEToastProtocol, DVEOriginalSoundButtonDelegate, DVECoreActionServiceProtocol;

@interface DVEOriginalSoundButton : UIView <DVECoreActionDelegate>

@property (retain, nonatomic) DVETrackPanelContext *context;
@property (retain, nonatomic) DVEButton *button;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackEventer;
@property (weak, nonatomic) id<DVECoreVideoProtocol> videoEditor;
@property (weak, nonatomic) id<DVEToastProtocol> toast;
@property (weak, nonatomic) id<DVEOriginalSoundButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)nleEditorDidChange;
- (void)refreshUIWithoutDone;
- (void)p_nleEditorDidChangeWithModel:(id)a0;
- (void)setUpButton;
- (void)toggleOriginalSoundButton:(id)a0;
- (void)trackEventClickButton;
- (void)p_nleNewEditorDidChangeWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)refreshUI;
- (void)handleTap:(id)a0;

@end
