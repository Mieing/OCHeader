@class NSString;

@interface MasterWxAcctInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImgUrl;

+ (void)initialize;

- (void)setHeadImgUrl:(id)a0;
- (id)headImgUrl;
- (void)setNickname:(id)a0;
- (id)nickname;
- (void)setUsername:(id)a0;
- (id)username;

@end
