@class NSString;

@interface WCPlayerFairPlayInfo : NSObject

@property (retain, nonatomic) NSString *certificateUrl;
@property (retain, nonatomic) NSString *contentKeyUrl;
@property (nonatomic) BOOL drmCompatible;

- (id)init;
- (void).cxx_destruct;

@end
