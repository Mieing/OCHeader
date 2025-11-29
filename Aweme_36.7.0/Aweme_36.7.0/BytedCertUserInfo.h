@class NSString;

@interface BytedCertUserInfo : NSObject

@property (readonly, copy, nonatomic) NSString *ticket;

+ (id)sharedInstance;

@end
