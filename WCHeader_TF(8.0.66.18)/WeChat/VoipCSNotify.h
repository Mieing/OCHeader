@class NSData;

@interface VoipCSNotify : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) unsigned int notifySeq;
@property (nonatomic) unsigned int calleeMemberId;
@property (nonatomic) unsigned int calleeStatus;
@property (nonatomic) unsigned int calleeSubStatus;
@property (retain, nonatomic) NSData *calleeCap;

+ (void)initialize;

@end
