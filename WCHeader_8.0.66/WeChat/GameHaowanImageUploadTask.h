@class NSString, NSMutableArray;

@interface GameHaowanImageUploadTask : GameHaowanUploadTask <ICdnComMgrExt>

@property (retain, nonatomic) NSString *fileKey;
@property (nonatomic) float lastPercent;
@property (readonly, nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) NSMutableArray *resIds;
@property (nonatomic) unsigned long long startUploadTime;

- (void)onStart;
- (void)startNextImageUpload;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)trackEventUploadSucceed;
- (void)trackEventUploadFailed:(long long)a0;
- (void)trackEventStartUpload;
- (void).cxx_destruct;

@end
