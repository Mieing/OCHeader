@class NSString, NSMutableArray;

@interface F2FNotifyPacket : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *fromUser;
@property (retain, nonatomic) NSString *toUser;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned long long key;
@property (retain, nonatomic) NSMutableArray *xchgList;

+ (void)initialize;

@end
