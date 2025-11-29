@class HTSEventContext, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveAnchorPFProcessDelegate;

@interface IESLiveAnchorPFBaseProcess : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) id<IESLiveAnchorPFProcessDelegate> delegate;

- (void)startProcess;
- (void)bindAction;
- (void)endProcess;
- (id)trackParamsForEntryViewShow;
- (id)trackParamsForEntryViewClick;
- (id)trackParamsForPFListViewShow;
- (void).cxx_destruct;

@end
