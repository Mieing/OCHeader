@class AWEIMEditFinishButtonViewState, NSString, AWEIMEditorFinishedComponent, ACCAnimatedButton;

@interface AWEIMEditFinishButtonViewHolder : NSObject <ACCEditUIViewHolderProtocol>

@property (retain, nonatomic) ACCAnimatedButton *finishButton;
@property (retain, nonatomic) AWEIMEditFinishButtonViewState *viewState;
@property (readonly, nonatomic) AWEIMEditorFinishedComponent *finishControl;
@property (weak, nonatomic) id component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)componentClass;

@end
