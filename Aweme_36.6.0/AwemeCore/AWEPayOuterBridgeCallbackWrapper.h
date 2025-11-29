@class NSString;
@protocol AWEYAPOuterBridgeProtocol, AWEPayOuterBridgeCallbackWrapperProtocol;

@interface AWEPayOuterBridgeCallbackWrapper : NSObject <CJPayOuterBridgeProtocol>

@property (copy, nonatomic) NSString *method;
@property (weak, nonatomic) id<AWEYAPOuterBridgeProtocol> originalPlugin;
@property (weak, nonatomic) id<AWEPayOuterBridgeCallbackWrapperProtocol> wrapperProtocol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithMethod:(id)a0 plugin:(id)a1;

@end
