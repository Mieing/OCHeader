@class NSString, UIImage, AWESearchAIGCVideoInfo;

@interface AWEFeedSearchAIGCSearchBarContext : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *searchBarPlaceholder;
@property (retain, nonatomic) AWESearchAIGCVideoInfo *videoInfo;
@property (retain, nonatomic) NSString *gid;
@property (retain, nonatomic) UIImage *currentVideoFrame;
@property (nonatomic) long long videoTimestamp;
@property (nonatomic) long long pauseIndex;
@property (copy, nonatomic) NSString *mediaType;

- (void).cxx_destruct;

@end
