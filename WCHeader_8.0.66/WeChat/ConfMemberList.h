@class NSMutableArray;

@interface ConfMemberList : WXPBGeneratedMessage

@property (nonatomic) unsigned long long imroomid;
@property (nonatomic) unsigned long long roomid;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (nonatomic) unsigned int memberChangeSeq;
@property (nonatomic) unsigned int memberChangeFrom;

+ (void)initialize;

@end
