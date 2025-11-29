@class NSString, NSData;

@interface PacketAuthenticateResponse : WXPBGeneratedMessage

@property (nonatomic) int step;
@property (nonatomic) int status;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) int version;
@property (nonatomic) int type;
@property (nonatomic) int supportExt;
@property (retain, nonatomic) NSData *token;

+ (void)initialize;

@end
