@class NSString;

@interface KindaContactService : NSObject <MMKContactService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)get:(id)a0;
- (void)attachAvatar:(id)a0 iv:(id)a1;
- (id)getUserName;
- (BOOL)isEuropeRegUser;
- (long long)getCryptUin;

@end
