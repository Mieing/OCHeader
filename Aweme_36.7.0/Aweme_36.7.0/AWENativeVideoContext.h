@class UIImage, NSString;

@interface AWENativeVideoContext : NSObject

@property (nonatomic) double currentPlaybackTime;
@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *coverImageUrl;

- (void).cxx_destruct;

@end
