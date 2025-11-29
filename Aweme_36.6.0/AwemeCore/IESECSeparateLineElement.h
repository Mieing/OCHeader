@class NSString, IESECBackgroundDescribeInfo, IESECImageModel;

@interface IESECSeparateLineElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECBackgroundDescribeInfo *background;
@property (retain, nonatomic) IESECImageModel *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
