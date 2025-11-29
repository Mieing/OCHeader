@class NSString, AWEURLModel;

@interface AWENearbyPendantModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *pendantID;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) unsigned long long materailType;
@property (retain, nonatomic) AWEURLModel *imageUrlModel;
@property (copy, nonatomic) NSString *lottieUrlString;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) double startTimeStamp;
@property (nonatomic) double endTimeStamp;
@property (nonatomic) double hiddenDuration;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long toastType;

+ (id)imageUrlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
