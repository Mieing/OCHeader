@class FinderLiveAppMsgSyncEventInfo_InfoValue;

@interface FinderLiveAppMsgSyncEventInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int eventId;
@property (nonatomic) unsigned int infoType;
@property (nonatomic) unsigned int subInfoType;
@property (retain, nonatomic) FinderLiveAppMsgSyncEventInfo_InfoValue *infoValue;

+ (void)initialize;

@end
