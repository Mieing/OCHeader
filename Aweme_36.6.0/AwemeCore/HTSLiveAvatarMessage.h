@class NSData, HTSLiveCommon, NSMutableDictionary;

@interface HTSLiveAvatarMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int cmd;
@property (copy, nonatomic) NSData *payload;
@property (retain, nonatomic) NSMutableDictionary *context;
@property (readonly, nonatomic) unsigned long long context_Count;

+ (id)descriptor;

@end
