@class NSString;

@interface BDCastStartStatedObject : NSObject

@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) long long port;
@property (copy, nonatomic) NSString *serverName;
@property (nonatomic) long long serverId;

- (void).cxx_destruct;
- (id)description;

@end
