@class NSString, IESECFeedResourceCardLynxConfigModel;

@interface IESECFeedResourceCardLynxCommonModel : IESECFeedResourceCardBaseNode

@property (copy, nonatomic) NSString *lynxData;
@property (retain, nonatomic) IESECFeedResourceCardLynxConfigModel *lynxConfig;

+ (id)lynxConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
