@class NSString;

@interface MultiMediaDownloadFavDataState : MultiMediaUploadBaseState

@property (retain, nonatomic) NSString *thumbFileKey;
@property (retain, nonatomic) NSString *dataFileKey;

- (void)start;
- (void)stop;
- (id)getStateName;
- (void)transformToNextState;
- (void)downloadThumbData;
- (void)onThumbDataDownloadSucc:(id)a0 savePath:(id)a1;
- (void)dowloadMediaData;
- (void)onMediaDataDownloadSucc:(id)a0 savePath:(id)a1;
- (void).cxx_destruct;

@end
