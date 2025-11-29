@class NSString;

@interface IESLLPOIDetailTempoLogProvider : NSObject <IESLLTempoLogProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logWithEvent:(id)a0 params:(id)a1;

@end
