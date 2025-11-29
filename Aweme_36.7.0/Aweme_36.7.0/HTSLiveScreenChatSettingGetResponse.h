@class HTSLiveScreenChatSettingGetResponse_Data;

@interface HTSLiveScreenChatSettingGetResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveScreenChatSettingGetResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
