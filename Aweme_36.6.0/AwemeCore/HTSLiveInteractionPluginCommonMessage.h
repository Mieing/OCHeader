@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveInteractionPluginCommonMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;

+ (id)descriptor;

@end
