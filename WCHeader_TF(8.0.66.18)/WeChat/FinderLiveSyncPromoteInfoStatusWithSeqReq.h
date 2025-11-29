@class NSData, NSString;

@interface FinderLiveSyncPromoteInfoStatusWithSeqReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long currentPromotingId;
@property (retain, nonatomic) NSData *extBuffer;
@property (retain, nonatomic) NSData *promoteInfoBuffer;
@property (nonatomic) BOOL hiddenState;
@property (retain, nonatomic) NSString *currentPromotingSubId;
@property (retain, nonatomic) NSData *syncContext;

+ (void)initialize;

@end
