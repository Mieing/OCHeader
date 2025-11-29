@class NSDictionary, NSString;

@interface AWEDemaciaRecallAdapater : NSObject <AWEDemaciaRecallProtocol>

@property (readonly, nonatomic) BOOL isResourceRecallEnabled;
@property (readonly, copy) NSDictionary *lastRecallMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0 handler:(id /* block */)a1;
- (void)registerByteSync;
- (void)removeObserver:(id)a0;

@end
