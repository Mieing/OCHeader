@class NSString;

@interface AFDFamiliarActivityModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *activityID;
@property (nonatomic) BOOL shouldShowActivityBtn;
@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSString *followText;
@property (copy, nonatomic) NSString *followedText;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *followedToast;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
