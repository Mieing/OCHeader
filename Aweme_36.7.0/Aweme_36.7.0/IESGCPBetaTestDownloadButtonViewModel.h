@class NSString, IESGCPDetailLaunchDownloadButtonConfig;

@interface IESGCPBetaTestDownloadButtonViewModel : IESGCPDetailBaseViewModel

@property (copy, nonatomic) NSString *unsupportedDownloadButtonText;
@property (readonly, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *betaTestDownloadButtonConfig;

- (void)handleButtonDidClick;
- (void).cxx_destruct;

@end
