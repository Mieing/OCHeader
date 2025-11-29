@class NSString, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveGoodsFlickerImageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveImageURLModel *flickerImageInfo;
@property (retain, nonatomic) NSString *flickerImageTag;
@property (retain, nonatomic) NSNumber *flickerImageDuration;
@property (nonatomic) BOOL showIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
