@class HTSLiveCommon, GPBInt64ObjectDictionary;

@interface HTSLiveRealTimeChatLikeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) GPBInt64ObjectDictionary *needRefresh;
@property (readonly, nonatomic) unsigned long long needRefresh_Count;

+ (id)descriptor;

@end
