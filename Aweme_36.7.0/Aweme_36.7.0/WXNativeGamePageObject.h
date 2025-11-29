@class NSString, NSData;

@interface WXNativeGamePageObject : NSObject

@property (nonatomic) BOOL isVideo;
@property (nonatomic) unsigned int videoDuration;
@property (copy, nonatomic) NSString *shareData;
@property (retain, nonatomic) NSData *gameThumbData;

+ (id)object;

- (void).cxx_destruct;

@end
