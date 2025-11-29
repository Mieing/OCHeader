@class NSString, MMListenMembershipJoinInfo;

@interface MMListenDigitalAlbumInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isDigital;
@property (nonatomic) BOOL isBuy;
@property (retain, nonatomic) NSString *buyWording;
@property (retain, nonatomic) MMListenMembershipJoinInfo *buyAlbumSchemeInfo;

+ (void)initialize;

@end
