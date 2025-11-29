@class NSNumber, BDPNetworkTask, NSString;

@interface BDPMetaRequestTask : NSObject <BDPMetaTaskCancelable>

@property (retain, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isBatchMeta;
@property (weak, nonatomic) BDPNetworkTask *ttTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;

@end
