@class NSString;

@interface CGUserInfoEventComponent : CGObject <CGUserInfoEventComponentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)requestUserInfo:(long long)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;

@end
