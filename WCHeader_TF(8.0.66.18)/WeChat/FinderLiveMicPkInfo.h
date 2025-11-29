@class NSString, NSMutableArray, FinderLiveContact;

@interface FinderLiveMicPkInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *liveMicId;
@property (nonatomic) unsigned long long micSeq;
@property (retain, nonatomic) NSString *micSdkUserId;
@property (retain, nonatomic) FinderLiveContact *micContact;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *micAudienceList;
@property (nonatomic) unsigned int micSdkLiveId;
@property (nonatomic) unsigned long long extFlag;

+ (void)initialize;

@end
