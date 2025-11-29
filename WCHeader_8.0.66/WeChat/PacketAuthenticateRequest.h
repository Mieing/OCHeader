@class NSString, NSData;

@interface PacketAuthenticateRequest : WXPBGeneratedMessage

@property (nonatomic) int step;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) int version;
@property (nonatomic) int type;
@property (nonatomic) int supportExt;
@property (nonatomic) int needToken;

+ (void)initialize;

@end
