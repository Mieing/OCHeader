@class IESLiveAnchorAdminPromptView, HTSLivePromptMessage, HTSEventContext, UIView, NSMutableArray;
@protocol IESLiveRoomService, IESLiveAnchorAdminPromptViewHandleDelegate;

@interface IESLiveAnchorAdminPromptViewHandle : NSObject

@property (weak, nonatomic) UIView *container;
@property (retain, nonatomic) IESLiveAnchorAdminPromptView *promptView;
@property (copy, nonatomic) NSMutableArray *messages;
@property (nonatomic) BOOL animating;
@property (retain, nonatomic) HTSLivePromptMessage *currentMessage;
@property (weak, nonatomic) id<IESLiveAnchorAdminPromptViewHandleDelegate> delegate;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)enQueue:(id)a0;
- (void)addCloseButton;
- (void)closePromptView;
- (void)removePromptView;
- (void)promptMessageFinishShow:(id)a0;
- (void)handleTracker:(id)a0 promptMessage:(id)a1;
- (id)deQueue;
- (void)addPromptView:(id)a0;
- (void)transformPromptView:(id)a0;
- (void)setupPromptViewContent:(id)a0;
- (void)emitMessageIfNeeded;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;
- (void)setLineSpacing:(id)a0;

@end
