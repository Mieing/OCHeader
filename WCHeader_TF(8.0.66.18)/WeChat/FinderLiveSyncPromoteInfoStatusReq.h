@class NSData;

@interface FinderLiveSyncPromoteInfoStatusReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long currentPromotingId;
@property (retain, nonatomic) NSData *extBuffer;
@property (retain, nonatomic) NSData *promoteInfoBuffer;

+ (void)initialize;

@end
