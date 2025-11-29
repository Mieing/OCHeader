@class NSArray, NSString;

@interface AWEMusicStickerRecommendManager : NSObject

@property (copy, nonatomic) NSArray *recommendMusicList;
@property (copy, nonatomic) NSString *zipURI;

+ (id)sharedInstance;

- (void)fetchRecommendMusicWithRepository:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
