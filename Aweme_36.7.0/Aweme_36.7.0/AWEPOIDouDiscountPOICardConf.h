@class NSString;

@interface AWEPOIDouDiscountPOICardConf : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL canClose;
@property (nonatomic) long long openTimeMS;
@property (nonatomic) long long days;
@property (nonatomic) long long threshold;
@property (nonatomic) long long banDays;
@property (retain, nonatomic) NSString *poiCardSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
