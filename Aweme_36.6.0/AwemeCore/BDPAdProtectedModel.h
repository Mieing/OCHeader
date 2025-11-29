@class NSString;

@interface BDPAdProtectedModel : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *aid;
@property (nonatomic) BOOL newUser;
@property (nonatomic) int duration;

- (void).cxx_destruct;

@end
