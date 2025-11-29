@class NSString, NSNumber;

@interface IESGCPXPlayDownloadActionRequestModel : NSObject

@property (copy, nonatomic) NSString *gameId;
@property (nonatomic) unsigned long long promoteScene;
@property (retain, nonatomic) NSNumber *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *nickname;

- (void).cxx_destruct;

@end
