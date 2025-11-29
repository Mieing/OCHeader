@class NSString;

@interface IESECWinExtensionCardItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL canGetExtensionCard;
@property (copy, nonatomic) NSString *extensionCardParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
