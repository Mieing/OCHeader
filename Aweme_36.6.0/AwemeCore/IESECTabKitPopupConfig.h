@class NSArray, NSString;

@interface IESECTabKitPopupConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *popups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
