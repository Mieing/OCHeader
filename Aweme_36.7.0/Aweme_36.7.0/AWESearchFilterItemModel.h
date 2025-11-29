@class NSString;

@interface AWESearchFilterItemModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) long long showDotTimeStamp;
@property (copy, nonatomic) NSString *logValue;
@property (nonatomic) BOOL dotShown;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)showDot;
- (void).cxx_destruct;

@end
