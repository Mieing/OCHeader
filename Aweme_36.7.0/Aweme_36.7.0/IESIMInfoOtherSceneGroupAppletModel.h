@class NSString;

@interface IESIMInfoOtherSceneGroupAppletModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *appletId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *iconUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
