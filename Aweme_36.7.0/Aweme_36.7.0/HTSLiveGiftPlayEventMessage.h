@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveGiftPlayEventMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int bizType;
@property (retain, nonatomic) NSMutableArray *petEffectInfoArray;
@property (readonly, nonatomic) unsigned long long petEffectInfoArray_Count;
@property (copy, nonatomic) NSString *bizData;

+ (id)descriptor;

@end
