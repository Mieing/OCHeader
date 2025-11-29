@class NSMutableArray;

@interface FinderBgmSessionBuffer : WXPBGeneratedMessage

@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) NSMutableArray *feedIdList;
@property (nonatomic) unsigned long long searchReqId;

+ (void)initialize;

@end
