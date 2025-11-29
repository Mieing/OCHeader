@class WCEditVideoInformation, NSString, FinderPostOriginInfo;

@interface WCFinderOriginMediaUploadSession : NSObject

@property (retain, nonatomic) FinderPostOriginInfo *originInfo;
@property (retain, nonatomic) WCEditVideoInformation *originVideoInfo;
@property (nonatomic) BOOL canUploadOriginVideo;
@property (copy, nonatomic) NSString *originVideoPath;

- (void)asyncGetOriginalVideoInfoWithCompletion:(id /* block */)a0;
- (BOOL)checkCanUploadOriginInfo;
- (void).cxx_destruct;

@end
