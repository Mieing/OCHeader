@class NSString;

@interface WXVideoObject : NSObject

@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *videoLowBandUrl;

+ (id)object;

- (id)init;
- (void).cxx_destruct;

@end
