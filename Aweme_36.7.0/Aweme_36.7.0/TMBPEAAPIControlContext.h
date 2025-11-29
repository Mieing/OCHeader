@class NSString, BDPrivacyCertValidateContext;
@protocol BDPrivacyCertProtocol;

@interface TMBPEAAPIControlContext : NSObject <TMAPIControlTaskContext>

@property (retain, nonatomic) BDPrivacyCertValidateContext *context;
@property (retain, nonatomic) id<BDPrivacyCertProtocol> cert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rulerParams;
- (id)apiMethod;
- (id)apiClass;
- (id)apiDataType;
- (id)callToken;
- (void)setCert:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
