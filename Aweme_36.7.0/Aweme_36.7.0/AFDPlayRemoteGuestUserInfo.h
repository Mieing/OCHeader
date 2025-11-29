@class NSString;

@interface AFDPlayRemoteGuestUserInfo : NSObject <AFDPlayRemoteGuestUserInfoProtocol>

@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *secUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserID:(id)a0 secUserID:(id)a1;
- (void).cxx_destruct;

@end
