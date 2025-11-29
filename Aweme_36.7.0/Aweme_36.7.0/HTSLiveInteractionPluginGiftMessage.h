@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveInteractionPluginGiftMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *giftsArray;
@property (readonly, nonatomic) unsigned long long giftsArray_Count;

+ (id)descriptor;

@end
