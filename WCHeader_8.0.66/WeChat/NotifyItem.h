@class NSData;

@interface NotifyItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSData *cmdBuff;

+ (void)initialize;

@end
