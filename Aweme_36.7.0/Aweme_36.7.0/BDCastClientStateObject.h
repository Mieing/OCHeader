@class NSString;

@interface BDCastClientStateObject : NSObject

@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *meta;
@property (nonatomic) long long port;
@property (nonatomic) long long serverId;

- (void).cxx_destruct;
- (id)description;

@end
