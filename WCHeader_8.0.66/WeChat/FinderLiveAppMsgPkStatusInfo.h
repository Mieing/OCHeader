@class NSString, NSMutableArray, FinderLiveContact;

@interface FinderLiveAppMsgPkStatusInfo : WXPBGeneratedMessage

@property (nonatomic) int scene;
@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) FinderLiveContact *micContact;
@property (retain, nonatomic) NSString *micSdkUserId;
@property (retain, nonatomic) NSMutableArray *audienceMicList;
@property (nonatomic) BOOL disableBattle;

+ (void)initialize;

@end
