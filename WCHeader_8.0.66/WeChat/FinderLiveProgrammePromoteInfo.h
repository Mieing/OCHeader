@class NSString, FinderJumpInfo;

@interface FinderLiveProgrammePromoteInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *programmeId;
@property (retain, nonatomic) NSString *programmeName;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned long long subscribeCount;
@property (nonatomic) unsigned int subscribeStatus;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

+ (void)initialize;

@end
