@class NSString;

@interface WXMusicObject : NSObject

@property (retain, nonatomic) NSString *musicUrl;
@property (retain, nonatomic) NSString *musicLowBandUrl;
@property (retain, nonatomic) NSString *musicDataUrl;
@property (retain, nonatomic) NSString *musicLowBandDataUrl;
@property (copy, nonatomic) NSString *songAlbumUrl;
@property (copy, nonatomic) NSString *songLyric;

+ (id)object;

- (id)init;
- (void).cxx_destruct;

@end
