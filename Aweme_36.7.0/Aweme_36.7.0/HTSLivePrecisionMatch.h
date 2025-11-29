@class NSString, NSMutableArray;

@interface HTSLivePrecisionMatch : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *sponsorId;
@property (retain, nonatomic) NSMutableArray *matchersArray;
@property (readonly, nonatomic) unsigned long long matchersArray_Count;
@property (copy, nonatomic) NSString *matchReason;
@property (nonatomic) long long waitSeconds;
@property (nonatomic) long long precisionMatchId;
@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *recommendReason;
@property (nonatomic) int source;
@property (copy, nonatomic) NSString *notDisturbText;
@property (nonatomic) long long flexActivityId;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *battleAttachedInfo;
@property (copy, nonatomic) NSString *precisionMatchIdStr;
@property (copy, nonatomic) NSString *activityId;
@property (nonatomic) int playMode;
@property (nonatomic) long long defaultRespondType;
@property (copy, nonatomic) NSString *toastContent;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *curBattleRule;
@property (retain, nonatomic) NSMutableArray *autoAcceptAnchorIdListArray;
@property (readonly, nonatomic) unsigned long long autoAcceptAnchorIdListArray_Count;
@property (copy, nonatomic) NSString *signExtra;

+ (id)descriptor;

@end
