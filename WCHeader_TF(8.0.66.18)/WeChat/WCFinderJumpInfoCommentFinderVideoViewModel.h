@class NSURL, NSString;

@interface WCFinderJumpInfoCommentFinderVideoViewModel : NSObject

@property (retain, nonatomic) NSURL *coverURL;
@property (nonatomic) BOOL showPlayIcon;
@property (nonatomic) BOOL showLikeIcon;
@property (copy, nonatomic) NSString *likeCount;
@property (nonatomic) long long displayType;

+ (id)modelWithData:(id)a0;

- (BOOL)isEqualToModel:(id)a0;
- (void).cxx_destruct;

@end
