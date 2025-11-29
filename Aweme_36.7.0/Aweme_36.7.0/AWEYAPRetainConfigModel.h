@class NSString, NSDictionary;

@interface AWEYAPRetainConfigModel : NSObject

@property (copy, nonatomic) NSString *bizID;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSDictionary *popupInfo;
@property (copy, nonatomic) NSDictionary *agreementInfo;
@property (copy, nonatomic) NSDictionary *trackerParam;
@property (nonatomic) BOOL needAgreementCheck;
@property (nonatomic) BOOL isAgreementChecked;
@property (nonatomic) long long pageRenderTimeoutMS;

- (void).cxx_destruct;
- (id)init;

@end
