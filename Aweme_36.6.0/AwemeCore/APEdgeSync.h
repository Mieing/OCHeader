@class NSString;

@interface APEdgeSync : NSObject <APRiskSyncHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)handleWithBizType:(id)a0 andData:(id)a1;
- (void)initSyncService;

@end
