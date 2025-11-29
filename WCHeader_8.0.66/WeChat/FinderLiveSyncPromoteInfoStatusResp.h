@class NSData;

@interface FinderLiveSyncPromoteInfoStatusResp : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int promoteInfoType;
@property (retain, nonatomic) NSData *promoteInfoBuffer;
@property (nonatomic) unsigned int needReplaceBuffer;
@property (nonatomic) unsigned int promotingFlag;
@property (nonatomic) unsigned int noOp;

+ (void)initialize;

@end
