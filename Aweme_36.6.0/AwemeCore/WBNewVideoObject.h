@class NSString, NSURL;
@protocol WBMediaTransferProtocol;

@interface WBNewVideoObject : NSObject

@property (retain, nonatomic) NSString *finalAsset;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) NSURL *videoData;
@property (retain, nonatomic) NSString *videoFormat;
@property (nonatomic) BOOL isShareToStory;
@property (weak, nonatomic) id<WBMediaTransferProtocol> delegate;

+ (id)dictionaryWithVideoObject:(id)a0;
+ (id)videoObjectWithDictionary:(id)a0;
+ (id)object;

- (void)addVideo:(id)a0;
- (void).cxx_destruct;
- (id)validate;

@end
