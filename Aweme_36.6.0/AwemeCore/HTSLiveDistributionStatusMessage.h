@class NSMutableDictionary;

@interface HTSLiveDistributionStatusMessage : GPBMessage

@property (nonatomic) long long anchorUid;
@property (nonatomic) long long roomId;
@property (nonatomic) int distributionStatus;
@property (nonatomic) int notifyType;
@property (nonatomic) int liveStatus;
@property (nonatomic) long long eventTimeMs;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
