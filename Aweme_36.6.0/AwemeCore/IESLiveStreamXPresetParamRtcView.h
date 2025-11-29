@class NSString, NSMutableArray;

@interface IESLiveStreamXPresetParamRtcView : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSMutableArray *sourcesArray;
@property (readonly, nonatomic) unsigned long long sourcesArray_Count;

+ (id)descriptor;

@end
