@class NSNumber, NSString, HTSLivePrecisionMatch_Matcher;

@interface IESLivePKMatchBellModel : NSObject

@property (retain, nonatomic) NSNumber *precisionMatchID;
@property (retain, nonatomic) NSString *precisionMatchIdStr;
@property (nonatomic) int source;
@property (copy, nonatomic) NSString *matchReason;
@property (nonatomic) unsigned long long remainSecond;
@property (nonatomic) BOOL isAnchorReady;
@property (copy, nonatomic) NSString *ownerAnchorDesc;
@property (copy, nonatomic) NSString *notDisturbText;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSString *activityID;
@property (retain, nonatomic) HTSLivePrecisionMatch_Matcher *oppositeAnchor;

- (void).cxx_destruct;

@end
