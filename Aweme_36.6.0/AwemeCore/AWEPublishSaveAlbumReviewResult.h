@class NSError;

@interface AWEPublishSaveAlbumReviewResult : AWEBaseBizConfigModel

@property (nonatomic) BOOL reviewFailed;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
