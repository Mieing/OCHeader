@class NSData;

@interface TransferReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int magic;
@property (retain, nonatomic) NSData *header;
@property (retain, nonatomic) NSData *body;

+ (void)initialize;

@end
