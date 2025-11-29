@class NSString, NSDictionary;

@interface AWEUGLiveActivityPitayaGuideModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *popupSessionId;
@property (copy, nonatomic) NSString *popupTrigger;
@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *subBusiness;
@property (copy, nonatomic) NSString *result;
@property (nonatomic) long long show;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)businessScene;
- (void).cxx_destruct;

@end
