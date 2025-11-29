@class NSString;

@interface AFDPlayRemoteHostInfo : NSObject <AFDPlayRemoteHostInfoProtocol>

@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVersion:(long long)a0 userID:(id)a1;
- (void).cxx_destruct;

@end
