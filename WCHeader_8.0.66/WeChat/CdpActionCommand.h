@class NSData, NSMutableArray;

@interface CdpActionCommand : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *sessionId;
@property (retain, nonatomic) NSData *cmdId;
@property (retain, nonatomic) NSMutableArray *cdpRequest;

+ (void)initialize;

@end
