@class GPBInt64Array;

@interface IESLiveLinkMicAudienceGuestLinkGetSettingsResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) BOOL isOpen;
@property (retain, nonatomic) GPBInt64Array *linkThresholdListArray;
@property (readonly, nonatomic) unsigned long long linkThresholdListArray_Count;
@property (nonatomic) long long defaultLinkThreshold;
@property (nonatomic) long long customThreshold;
@property (retain, nonatomic) GPBInt64Array *callDurationListArray;
@property (readonly, nonatomic) unsigned long long callDurationListArray_Count;
@property (nonatomic) long long defaultCallDuration;
@property (nonatomic) long long linkedPairCount;

+ (id)descriptor;

@end
