@class NSString, HTSLiveCommon, NSMutableDictionary;

@interface HTSLiveRealtimeStatusPanelMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *tabKey;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly, nonatomic) unsigned long long params_Count;

+ (id)descriptor;

@end
