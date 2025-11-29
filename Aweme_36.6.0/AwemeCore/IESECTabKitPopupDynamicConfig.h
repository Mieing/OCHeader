@class NSString;

@interface IESECTabKitPopupDynamicConfig : MTLModel <MTLJSONSerializing> {
    NSString *_jsonString;
}

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *bundleURL;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) unsigned long long zIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)toJSON;

@end
