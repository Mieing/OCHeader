@class NSNumber, NSArray, NSString;

@interface AWEMusicDetailInspirationSettingsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *upperLimitCount;
@property (retain, nonatomic) NSArray *inspirations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inspirationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
