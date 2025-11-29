@class NSString;

@interface AWECompatTipStructModel : AWEBaseApiModel

@property (nonatomic) BOOL showCompatTip;
@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSString *avatarText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
