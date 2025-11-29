@class NSString;

@interface StatusHistoryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *textStatusId;
@property (retain, nonatomic) NSString *topicId;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) int likedCount;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) int referencedCount;
@property (nonatomic) unsigned long long key;
@property (nonatomic) int commentCount;
@property (retain, nonatomic) NSString *privateInfo;

+ (void)initialize;

@end
