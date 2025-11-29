@class NSString, NSData;

@interface FinderCmdRet : WXPBGeneratedMessage

@property (nonatomic) unsigned int cmdId;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSData *retBuf;

+ (void)initialize;

@end
