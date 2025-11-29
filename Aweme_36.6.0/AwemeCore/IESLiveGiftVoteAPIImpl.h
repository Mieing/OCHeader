@class NSString;
@protocol IESLiveMonitor;

@interface IESLiveGiftVoteAPIImpl : NSObject <IESLiveGiftVoteAPI>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchVoteModelWithVoteID:(id)a0 roomID:(id)a1 firstFetch:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
