@class NSString, HTSLivePrecisionMatch_Matcher;

@interface IESLiveAioLinkUpdateMatchBellParams : IESLivePBBaseMessage

@property (nonatomic) long long matchType;
@property (copy, nonatomic) NSString *precisionMatchIdStr;
@property (nonatomic) long long flexActivityId;
@property (nonatomic) long long remainTime;
@property (nonatomic) int source;
@property (retain, nonatomic) HTSLivePrecisionMatch_Matcher *ownerAnchor;
@property (nonatomic) BOOL hasOwnerAnchor;
@property (retain, nonatomic) HTSLivePrecisionMatch_Matcher *oppositeAnchor;
@property (nonatomic) BOOL hasOppositeAnchor;

+ (id)descriptor;

@end
