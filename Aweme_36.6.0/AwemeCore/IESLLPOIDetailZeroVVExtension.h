@class IESLLPOIDetailZeroVVReporter;

@interface IESLLPOIDetailZeroVVExtension : IESLLPOIBaseExtension

@property (retain, nonatomic) IESLLPOIDetailZeroVVReporter *zeroVVReporter;

- (void)initializeExtension;
- (void)ditoLynxExtensionV2:(id)a0 didStartToLoadLynxContainer:(id)a1 tag:(id)a2;
- (void)ditoLynxExtensionV2:(id)a0 didReceiveError:(id)a1 withView:(id)a2;
- (void)ditoLynxExtensionV2:(id)a0 didReceiveFirstScreenWithView:(id)a1;
- (void)ditoLynxExtensionV2:(id)a0 viewDidUpdate:(id)a1;
- (void).cxx_destruct;

@end
