@class NSString;

@interface IESLiveGiftVoteBackendServiceImpl : NSObject <IESLiveGiftVoteBackendService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestGroupVoteBackEndData:(id /* block */)a0;

@end
