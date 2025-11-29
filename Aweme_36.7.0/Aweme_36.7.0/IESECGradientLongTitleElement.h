@class NSString, IESECBackgroundDescribeInfo, IESECLongTitleElement;

@interface IESECGradientLongTitleElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECBackgroundDescribeInfo *backgroundDescInfo;
@property (retain, nonatomic) IESECLongTitleElement *longTitleElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
