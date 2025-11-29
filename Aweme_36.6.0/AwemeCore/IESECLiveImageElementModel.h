@class NSString, IESECLiveImageBubbleElementModel, IESECLiveImageURLModel;

@interface IESECLiveImageElementModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveImageURLModel *image;
@property (retain, nonatomic) IESECLiveImageBubbleElementModel *bubbleElement;
@property (nonatomic) double imageRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateWithMsg:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
