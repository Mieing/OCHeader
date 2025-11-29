@class NSData;

@interface IlinkCmdMsgData : WXPBGeneratedMessage

@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSData *content;

+ (void)initialize;

@end
