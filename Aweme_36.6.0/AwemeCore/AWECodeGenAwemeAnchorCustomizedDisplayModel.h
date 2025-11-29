@class NSArray, NSString;

@interface AWECodeGenAwemeAnchorCustomizedDisplayModel : AWEBaseDataModel

@property (nonatomic) long long afterPlayTimes;
@property (nonatomic) long long afterPlayMs;
@property (copy, nonatomic) NSArray *timeSlicesArray;
@property (nonatomic) BOOL isSlideBackDisplay;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
