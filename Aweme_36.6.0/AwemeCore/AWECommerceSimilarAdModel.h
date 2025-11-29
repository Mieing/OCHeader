@class NSString, NSDictionary;

@interface AWECommerceSimilarAdModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) double asyncGetAdTs;
@property (nonatomic) BOOL isShowingSimilarAd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
