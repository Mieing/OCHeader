@class NSString, NSDictionary;

@interface AWEUserLoginUIAmbientObject : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSString *themeID;
@property (retain, nonatomic) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
