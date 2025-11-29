@class RemindFriendsInfo, SKBuiltinString_t, SnsADObject;

@interface AdvertiseObject : WXPBGeneratedMessage

@property (retain, nonatomic) SnsADObject *snsAdobject;
@property (retain, nonatomic) SKBuiltinString_t *adinfo;
@property (nonatomic) unsigned int adpos;
@property (retain, nonatomic) RemindFriendsInfo *remindFriendsInfo;

+ (void)initialize;

- (void)setRemindFriendsInfo:(id)a0;
- (id)remindFriendsInfo;
- (void)setAdpos:(unsigned int)a0;
- (unsigned int)adpos;
- (void)setAdinfo:(id)a0;
- (id)adinfo;
- (void)setSnsAdobject:(id)a0;
- (id)snsAdobject;

@end
