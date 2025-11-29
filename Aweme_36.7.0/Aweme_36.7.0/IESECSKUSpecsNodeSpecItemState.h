@class NSString;

@interface IESECSKUSpecsNodeSpecItemState : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL canSelect;
@property (retain, nonatomic) NSString *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
