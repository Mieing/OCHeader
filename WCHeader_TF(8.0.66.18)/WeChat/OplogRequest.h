@class CmdList;

@interface OplogRequest : WXPBGeneratedMessage

@property (retain, nonatomic) CmdList *oplog;

+ (void)initialize;

- (void)setOplog:(id)a0;
- (id)oplog;

@end
