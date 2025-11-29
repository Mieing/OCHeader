@class NSString;

@interface AWEECLynxGeckoMessage : NSObject

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *cdnURL;

- (BOOL)geckoValid;
- (void).cxx_destruct;

@end
