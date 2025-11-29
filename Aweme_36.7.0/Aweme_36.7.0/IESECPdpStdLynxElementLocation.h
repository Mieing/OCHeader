@class NSString;

@interface IESECPdpStdLynxElementLocation : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *anchorViewKey;
@property (copy, nonatomic) NSString *anchorParentViewKey;
@property (nonatomic) BOOL hideWhenScreenChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
