@class NSString, AWEIMEditSendButtonViewState, AWEIMEditorSendComponent, ACCAnimatedButton;

@interface AWEIMEditSendButtonViewHolder : NSObject <ACCEditUIViewHolderProtocol>

@property (retain, nonatomic) ACCAnimatedButton *sendButton;
@property (retain, nonatomic) AWEIMEditSendButtonViewState *viewState;
@property (readonly, nonatomic) AWEIMEditorSendComponent *sendControl;
@property (weak, nonatomic) id component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)componentClass;

- (void)sendButtonClicked;
- (id)initWithViewState:(id)a0;
- (void)bindViewState;
- (void).cxx_destruct;
- (id)buttonTitle;

@end
