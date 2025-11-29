@class CmdList;

@interface OplogRequest : WXPBGeneratedMessage

@property (retain, nonatomic) CmdList *oplog;

+ (void)initialize;

@end
