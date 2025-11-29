@class NSNumber, NSString;

@interface ALMVideoPreloadInfoStoreBox : NSObject

@property (retain, nonatomic) NSNumber *preloadSize;
@property (retain, nonatomic) NSNumber *mediaSize;
@property (retain, nonatomic) NSNumber *bitrate;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *videoID;

- (id)initWithBitrate:(id)a0 urlString:(id)a1 videoId:(id)a2;
- (id)initWithPreloadedSize:(id)a0 mediaSize:(id)a1 urlString:(id)a2 videoId:(id)a3;
- (void).cxx_destruct;

@end
