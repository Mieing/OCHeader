@class IESGCPPBGameDetailDownloadButtonV2, NSString;

@interface IESGCPDetailDownloadButtonV4ViewModel : IESGCPDetailUniversalButtonViewModel

@property (retain, nonatomic) IESGCPPBGameDetailDownloadButtonV2 *buttonData;
@property (readonly, nonatomic) BOOL isSupportDownload;
@property (copy, nonatomic) NSString *gameRatingString;
@property (readonly, copy, nonatomic) NSString *iosPackageInfo;

- (void)parseButtonStyle;
- (void)openAppStoreControllerWithTrackParam:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)buttonStyle;

@end
