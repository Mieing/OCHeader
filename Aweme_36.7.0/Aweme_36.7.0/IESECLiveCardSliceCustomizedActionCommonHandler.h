@class NSSet, IESECLiveContext, NSMutableSet, NSString, IESECLiveSliceCardView;

@interface IESECLiveCardSliceCustomizedActionCommonHandler : NSObject <IESECLiveCardSliceCustomizedActionProtocol>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) IESECLiveSliceCardView *cardView;
@property (retain, nonatomic) NSSet *actionNames;
@property (retain, nonatomic) NSMutableSet *timers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveContext:(id)a0 sliceCardView:(id)a1;
- (BOOL)executeIfNeededWithActionName:(id)a0 event:(id)a1;
- (void)handleDelayUpdateDataEvent:(id)a0;
- (void)removeTimers;
- (void)removeInvalidTimersAndAddNewTimer:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
