@class GPBInt64ObjectDictionary;

@interface GetChatOptionPanelStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64ObjectDictionary *data_p;
@property (readonly, nonatomic) unsigned long long data_p_Count;
@property (nonatomic) long long version;

+ (id)descriptor;

@end
