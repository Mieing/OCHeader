@class NSString;

@interface AWEDTONewMomentSpringParam : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isNewMomentSpring;
@property (nonatomic) long long isRedPocket;
@property (nonatomic) long long isRedPocketPublish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
