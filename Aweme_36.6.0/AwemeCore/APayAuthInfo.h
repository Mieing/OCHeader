@class NSString;

@interface APayAuthInfo : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *pid;
@property (copy, nonatomic) NSString *redirectUri;

- (id)initWithAppID:(id)a0 pid:(id)a1 redirectUri:(id)a2;
- (id)wapDescription;
- (void).cxx_destruct;
- (id)description;

@end
