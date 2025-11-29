@class NewLifeJumpSyncInfo, NewLifeFeedOperationSyncInfo, NewLifeFollowSyncInfo;

@interface NewLifeSyncStatusReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int syncType;
@property (retain, nonatomic) NewLifeFeedOperationSyncInfo *feedOperationSyncInfo;
@property (retain, nonatomic) NewLifeFollowSyncInfo *followSyncInfo;
@property (retain, nonatomic) NewLifeJumpSyncInfo *jumpSyncInfo;

+ (void)initialize;

@end
