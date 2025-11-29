@class NSData;

@interface ILinkRUDPCmd : WXPBGeneratedMessage

@property (nonatomic) int cmdType;
@property (retain, nonatomic) NSData *cmdBuffer;
@property (nonatomic) unsigned long long reqId;

+ (void)initialize;

@end
