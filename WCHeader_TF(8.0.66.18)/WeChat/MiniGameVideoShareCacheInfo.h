@class MiniGameVideoFile, NSString;

@interface MiniGameVideoShareCacheInfo : NSObject

@property (retain, nonatomic) MiniGameVideoFile *videofile;
@property (retain, nonatomic) NSString *shareUrl;
@property (retain, nonatomic) NSString *shareThumbUrl;

- (id)initWithVideoFile:(id)a0 shareUrl:(id)a1 shareThumbUrl:(id)a2;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
