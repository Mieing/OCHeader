@class NSString, MMHeadImageView;

@interface KindaAvatarImageView : KindaView <MMKAvatarImageView>

@property (retain, nonatomic) MMHeadImageView *m_headImageView;
@property (retain, nonatomic) NSString *m_userName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (void)setUsername:(id)a0;
- (id)getUsername;
- (void)setWidth:(float)a0;
- (void)setHeight:(float)a0;
- (id)getDarkModeUrl;
- (id)getDefaultUrl;
- (id)getImage;
- (id)getImageData;
- (long long)getScaleType;
- (id)getTintColor;
- (id)getUrl;
- (void)setDarkModeUrl:(id)a0;
- (void)setDefaultUrl:(id)a0;
- (void)setImage:(id)a0;
- (void)setImageData:(id)a0;
- (void)setScaleType:(long long)a0;
- (void)setTintColor:(id)a0;
- (void)setUrl:(id)a0;
- (void)setPossibleNotFriend:(BOOL)a0;
- (BOOL)getPossibleNotFriend;
- (void).cxx_destruct;

@end
