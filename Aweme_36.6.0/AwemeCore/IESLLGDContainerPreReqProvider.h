@class NSArray, NSString, IESLLPOIDetailPreRequestManager;

@interface IESLLGDContainerPreReqProvider : NSObject <IESLLGDContainerPreReqProtocol>

@property (retain, nonatomic) NSArray *schemeUrls;
@property (retain, nonatomic) IESLLPOIDetailPreRequestManager *preRequestManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUrlSchemes:(id)a0;
- (void)mergeWithResponseDictionary:(id)a0;
- (void)ditoExtension:(id)a0 didReceiveSizeChangeWithViewTag:(id)a1;
- (void)gdContainerWillRefresh;
- (void)updatePreRequestPageModel:(id)a0;
- (void)createPreReqManagerWithContext:(id)a0 viewController:(id)a1 baseRouterParams:(id)a2;
- (void).cxx_destruct;
- (void)clear;

@end
