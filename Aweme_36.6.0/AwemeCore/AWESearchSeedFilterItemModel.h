@class NSString;

@interface AWESearchSeedFilterItemModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) long long showDotTimeStamp;
@property (copy, nonatomic) NSString *logValue;
@property (readonly, nonatomic) NSString *iconUnselectedUrl;
@property (readonly, nonatomic) NSString *iconSelectedUrl;
@property (readonly, nonatomic) NSString *iconDarkUnselectedUrl;
@property (nonatomic) BOOL dotShown;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)showDot;
- (void).cxx_destruct;

@end
