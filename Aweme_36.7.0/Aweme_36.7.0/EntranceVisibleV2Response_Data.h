@class AudienceEntranceInfo;

@interface EntranceVisibleV2Response_Data : IESLivePBBaseMessage

@property (retain, nonatomic) AudienceEntranceInfo *entranceInfo;
@property (nonatomic) BOOL hasEntranceInfo;

+ (id)descriptor;

@end
