@class NSString;

@interface AFDSetSchoolPopupResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL shouldShow;
@property (copy, nonatomic) NSString *defaultSchoolName;
@property (copy, nonatomic) NSString *comment;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
