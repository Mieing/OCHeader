@class NSString, NSMutableArray;

@interface PacketSvrIDRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *svrId;
@property (retain, nonatomic) NSMutableArray *mediaId;
@property (retain, nonatomic) NSMutableArray *md5;
@property (retain, nonatomic) NSString *bakChatName;

+ (void)initialize;

@end
