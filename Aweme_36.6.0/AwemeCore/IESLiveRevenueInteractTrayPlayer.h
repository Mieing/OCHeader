@class IESLiveRevenueInteractTrayQueue, NSString, HTSEventContext, IESLiveComponentContext;
@protocol IESLiveRevenueInteractModule;

@interface IESLiveRevenueInteractTrayPlayer : NSObject

@property (nonatomic) BOOL isLooping;
@property (copy, nonatomic) NSString *toUserID;
@property (retain, nonatomic) IESLiveRevenueInteractTrayQueue *queue;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueInteractModule;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;

- (void)loopNext;
- (void)playWithNode:(id)a0 completion:(id /* block */)a1;
- (void)trackTrayShow:(id)a0;
- (id)initWithUserID:(id)a0 eventContext:(id)a1 componentContext:(id)a2;
- (void).cxx_destruct;
- (void)didReceiveMessage:(id)a0;

@end
