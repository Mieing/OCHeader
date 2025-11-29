@class NSArray, NSNumber, NSString;

@interface AWEAdLongVideoDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *adItems;
@property (retain, nonatomic) NSNumber *skipAdSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
