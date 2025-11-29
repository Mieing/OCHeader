@class NSString, AWEAIPropTaskVideoResponseModel;

@interface AWEAIPropTaskQueryStateResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) long long completeState;
@property (retain, nonatomic) AWEAIPropTaskVideoResponseModel *video;
@property (copy, nonatomic) NSString *videoType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
