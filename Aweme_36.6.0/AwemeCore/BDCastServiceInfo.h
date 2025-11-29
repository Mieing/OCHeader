@class NSString;

@interface BDCastServiceInfo : NSObject

@property (copy, nonatomic) NSString *ip;
@property (nonatomic) long long port;
@property (nonatomic) long long portInvite;
@property (retain, nonatomic) NSString *customInfo;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) long long serverId;
@property (copy, nonatomic) NSString *connectId;
@property (copy, nonatomic) NSString *browseId;
@property (copy, nonatomic) NSString *rtmpURL;
@property (nonatomic) long long sdkType;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
