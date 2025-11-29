@class NSString;

@interface BizChat : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizchatId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *headImageUrl;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int ver;
@property (nonatomic) unsigned int bitFlag;
@property (nonatomic) unsigned int maxMemberCnt;
@property (retain, nonatomic) NSString *ownerUserId;
@property (retain, nonatomic) NSString *addMemberUrl;

+ (void)initialize;

@end
