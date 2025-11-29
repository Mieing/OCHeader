@class NSString;

@interface AWELabelPositionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long drawPosition;
@property (nonatomic) unsigned long long outflowPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
