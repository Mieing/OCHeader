@class HTSLiveCommon, NSMutableDictionary;

@interface HTSLiveCommonDotMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableDictionary *panelDots;
@property (readonly, nonatomic) unsigned long long panelDots_Count;

+ (id)descriptor;

@end
