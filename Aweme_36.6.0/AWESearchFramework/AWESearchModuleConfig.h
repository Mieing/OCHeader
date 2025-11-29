@class NSString;

@interface AWESearchModuleConfig : NSObject

@property (readonly, copy, nonatomic) NSString *landingPageURL;

+ (id)sharedInstance;

- (id)landingPageURL;
- (void).cxx_destruct;

@end
