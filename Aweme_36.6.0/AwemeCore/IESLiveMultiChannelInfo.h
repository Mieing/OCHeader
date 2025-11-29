@class GPBInt64ObjectDictionary;

@interface IESLiveMultiChannelInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL useMultiChannel;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkmicInfos;
@property (readonly, nonatomic) unsigned long long linkmicInfos_Count;

+ (id)descriptor;

@end
