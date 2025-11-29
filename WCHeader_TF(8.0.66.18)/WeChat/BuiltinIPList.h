@class NSMutableArray;

@interface BuiltinIPList : WXPBGeneratedMessage

@property (nonatomic) unsigned int longConnectIpcount;
@property (nonatomic) unsigned int shortConnectIpcount;
@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSMutableArray *longConnectIplist;
@property (retain, nonatomic) NSMutableArray *shortConnectIplist;

+ (void)initialize;

- (void)setShortConnectIplist:(id)a0;
- (id)shortConnectIplist;
- (void)setLongConnectIplist:(id)a0;
- (id)longConnectIplist;
- (void)setSeq:(unsigned int)a0;
- (unsigned int)seq;
- (void)setShortConnectIpcount:(unsigned int)a0;
- (unsigned int)shortConnectIpcount;
- (void)setLongConnectIpcount:(unsigned int)a0;
- (unsigned int)longConnectIpcount;

@end
