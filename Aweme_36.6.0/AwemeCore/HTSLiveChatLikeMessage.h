@class HTSLiveCommon, GPBInt64ObjectDictionary;

@interface HTSLiveChatLikeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) GPBInt64ObjectDictionary *totalMsgData;
@property (readonly, nonatomic) unsigned long long totalMsgData_Count;

+ (id)descriptor;

@end
