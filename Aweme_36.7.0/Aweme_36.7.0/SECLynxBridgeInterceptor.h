@class NSString;
@protocol SECHybridAPICheckDecisionProtocol;

@interface SECLynxBridgeInterceptor : NSObject <SECLynxPlugin>

@property (retain, nonatomic) id<SECHybridAPICheckDecisionProtocol> checker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
