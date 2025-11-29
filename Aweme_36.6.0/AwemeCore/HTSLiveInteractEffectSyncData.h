@class NSString, NSMutableDictionary;

@interface HTSLiveInteractEffectSyncData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSMutableDictionary *anchorStickers;
@property (readonly, nonatomic) unsigned long long anchorStickers_Count;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
