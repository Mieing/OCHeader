@class NSString;

@interface GameHaowanBasePostInfo : MMObject

@property (nonatomic) long long postType;
@property (retain, nonatomic) NSString *extra;
@property (nonatomic) long long source;
@property (nonatomic) BOOL isMiniGamePublish;
@property (retain, nonatomic) NSString *videoId;
@property (nonatomic) BOOL needDelAfterPost;

- (void).cxx_destruct;

@end
