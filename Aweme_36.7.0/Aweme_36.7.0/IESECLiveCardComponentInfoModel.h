@class NSNumber, IESECLiveCardSizeComponentModel, NSString;

@interface IESECLiveCardComponentInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long componentType;
@property (nonatomic) long long componentDefaultStatus;
@property (retain, nonatomic) NSNumber *componentKeepShowTime;
@property (retain, nonatomic) IESECLiveCardSizeComponentModel *sizeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sizeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
