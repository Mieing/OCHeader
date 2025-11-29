@class NSString;

@interface FavWebCacheImageInfo : SimpleMsgInfo

@property (retain, nonatomic) NSString *dataPath;
@property (nonatomic) BOOL isGif;

- (id)initWithDataPath:(id)a0 isGif:(BOOL)a1;
- (BOOL)isImgMsg;
- (BOOL)isGifMsg;
- (id)getImgPath;
- (void).cxx_destruct;

@end
