@class NSDictionary, NSString;

@interface AWEECOMIMCharDetailFloatCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *ext;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *renderType;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) id /* block */ trackerCommonParams;
@property (copy, nonatomic) NSString *dataUniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
