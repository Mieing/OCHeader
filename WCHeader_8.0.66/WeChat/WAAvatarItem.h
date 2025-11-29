@class NSString;

@interface WAAvatarItem : NSObject

@property (nonatomic) unsigned int avatarId;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *desc;

+ (id)fromUserAvatarItem:(id)a0;
+ (id)fromOauthAvatarInfo:(id)a0;

- (void).cxx_destruct;

@end
