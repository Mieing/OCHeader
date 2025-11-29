@class NSString, GPBEnumArray;

@interface IESLiveLinkMicAudienceAudioShowMediaExtra : IESLivePBBaseMessage

@property (retain, nonatomic) GPBEnumArray *supportUiLayoutArray;
@property (readonly, nonatomic) unsigned long long supportUiLayoutArray_Count;
@property (nonatomic) BOOL adminNeedEnlarged;
@property (copy, nonatomic) NSString *rtcExtInfo;

+ (id)descriptor;

@end
