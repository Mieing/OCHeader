@class NSString;

@interface IESIMUGCodeGenGroupUIInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *widgetSchema;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) BOOL hasReplyTask;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
