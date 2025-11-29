@class NSString, ACCEditNoteStyleNextButtonViewState, ACCVideoEditFlowControlComponent, ACCAnimatedButton;

@interface ACCEditNextButtonViewHolder : NSObject <ACCEditUIViewHolderProtocol>

@property (retain, nonatomic) ACCAnimatedButton *nextButton;
@property (retain, nonatomic) ACCEditNoteStyleNextButtonViewState *viewState;
@property (readonly, nonatomic) ACCVideoEditFlowControlComponent *flowControl;
@property (weak, nonatomic) id component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)componentClass;

@end
