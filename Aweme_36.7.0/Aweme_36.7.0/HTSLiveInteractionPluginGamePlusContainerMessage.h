@class NSMutableArray, HTSLiveCommon;

@interface HTSLiveInteractionPluginGamePlusContainerMessage : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
