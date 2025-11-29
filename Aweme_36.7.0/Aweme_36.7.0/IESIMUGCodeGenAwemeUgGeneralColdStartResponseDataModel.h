@class NSString, NSDictionary, IESIMUGCodeGenIncentiveIMColdStartInfoModel;

@interface IESIMUGCodeGenAwemeUgGeneralColdStartResponseDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *prompts;
@property (copy, nonatomic) NSDictionary *incentiveChatInfo;
@property (copy, nonatomic) NSDictionary *incentiveShareInfo;
@property (retain, nonatomic) IESIMUGCodeGenIncentiveIMColdStartInfoModel *incentiveImInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
