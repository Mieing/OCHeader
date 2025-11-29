@class NSString;

@interface AWEUserIdentifyModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *trackerParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
