@class NSString, NSArray, IESECLiveImageURLModel;

@interface IESECLiveAnchorOrderLimitModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *backGroundColor;
@property (retain, nonatomic) IESECLiveImageURLModel *leftIcon;
@property (retain, nonatomic) NSArray *limitContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)limitContentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
