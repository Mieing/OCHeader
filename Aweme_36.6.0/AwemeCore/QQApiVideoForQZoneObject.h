@class NSString, NSDictionary, NSData;

@interface QQApiVideoForQZoneObject : QQApiObject

@property (copy, nonatomic) NSString *assetURL;
@property (copy, nonatomic) NSDictionary *extMap;
@property (copy, nonatomic) NSData *videoData;

+ (id)objectWithAssetURL:(id)a0 title:(id)a1 extMap:(id)a2;
+ (id)objectWithVideoData:(id)a0 title:(id)a1 extMap:(id)a2;

- (id)initWithAssetURL:(id)a0 title:(id)a1 extMap:(id)a2;
- (id)initWithVideoData:(id)a0 title:(id)a1 extMap:(id)a2;
- (void).cxx_destruct;

@end
