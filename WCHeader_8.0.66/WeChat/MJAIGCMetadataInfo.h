@class NSString;

@interface MJAIGCMetadataInfo : NSObject <YYModel>

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *contentProducer;
@property (copy, nonatomic) NSString *produceID;
@property (copy, nonatomic) NSString *contentPropagator;
@property (copy, nonatomic) NSString *propagateID;
@property (copy, nonatomic) NSString *serviceProvider;
@property (copy, nonatomic) NSString *time;
@property (copy, nonatomic) NSString *contentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)fromJsonString:(id)a0;

@end
