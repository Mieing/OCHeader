@class IESLiveStreamXPresetParamAudioProfile, NSString, IESLiveStreamXPresetParamVideoProfile, IESLiveStreamXPresetParamOutput, NSMutableArray;

@interface IESLiveStreamXPresetParam : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveStreamXPresetParamVideoProfile *videoProfile;
@property (nonatomic) BOOL hasVideoProfile;
@property (retain, nonatomic) IESLiveStreamXPresetParamAudioProfile *audioProfile;
@property (nonatomic) BOOL hasAudioProfile;
@property (retain, nonatomic) IESLiveStreamXPresetParamOutput *output;
@property (nonatomic) BOOL hasOutput;
@property (retain, nonatomic) NSMutableArray *rtcSettingArray;
@property (readonly, nonatomic) unsigned long long rtcSettingArray_Count;
@property (retain, nonatomic) NSMutableArray *viewsArray;
@property (readonly, nonatomic) unsigned long long viewsArray_Count;
@property (copy, nonatomic) NSString *rtcBusinessId;
@property (retain, nonatomic) NSMutableArray *initResourceArray;
@property (readonly, nonatomic) unsigned long long initResourceArray_Count;

+ (id)descriptor;

@end
