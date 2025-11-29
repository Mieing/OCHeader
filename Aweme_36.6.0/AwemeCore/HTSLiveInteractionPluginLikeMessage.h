@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveInteractionPluginLikeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *likesArray;
@property (readonly, nonatomic) unsigned long long likesArray_Count;

+ (id)descriptor;

@end
