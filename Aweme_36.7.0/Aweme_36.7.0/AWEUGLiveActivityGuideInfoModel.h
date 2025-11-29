@class NSString, NSDictionary;

@interface AWEUGLiveActivityGuideInfoModel : NSObject

@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *subBusiness;
@property (copy, nonatomic) NSString *popupSessionId;
@property (copy, nonatomic) NSString *popupTrigger;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (id)businessScene;
- (void).cxx_destruct;

@end
