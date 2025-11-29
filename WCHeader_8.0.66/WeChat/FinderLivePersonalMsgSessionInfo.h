@class NSString, NSMutableArray, FinderLiveContact;

@interface FinderLivePersonalMsgSessionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) FinderLiveContact *anchorContact;
@property (retain, nonatomic) FinderLiveContact *audienceContact;
@property (retain, nonatomic) NSMutableArray *assistantContact;
@property (nonatomic) unsigned int roleType;
@property (nonatomic) unsigned int assistantIndex;

+ (void)initialize;

@end
