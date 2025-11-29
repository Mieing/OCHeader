@class NSString, NSMutableArray;

@interface FinderLiveAppMsgNewAcceptPkInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *pkroomAnchors;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *vroomId;
@property (nonatomic) unsigned long long vroomIdVersion;

+ (void)initialize;

@end
