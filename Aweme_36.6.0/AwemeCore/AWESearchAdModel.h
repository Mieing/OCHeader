@class AWESearchAdEasterEggModel, NSString, AWEFullScreenAdEggModel;

@interface AWESearchAdModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWESearchAdEasterEggModel *eggModel;
@property (copy, nonatomic) NSString *logData;
@property (copy, nonatomic) NSString *feedExtra;
@property (retain, nonatomic) AWEFullScreenAdEggModel *fullScreenAdEggModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eggModelJSONTransformer;
+ (id)fullScreenAdEggModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
