@class NSString;

@interface WXMusicObject : NSObject

@property (copy, nonatomic) NSString *musicUrl;
@property (copy, nonatomic) NSString *musicLowBandUrl;
@property (copy, nonatomic) NSString *musicDataUrl;
@property (copy, nonatomic) NSString *musicLowBandDataUrl;
@property (copy, nonatomic) NSString *songAlbumUrl;
@property (copy, nonatomic) NSString *songLyric;

+ (id)object;

- (void).cxx_destruct;

@end
