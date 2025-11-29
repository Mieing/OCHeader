@class NSString;

@interface AWENoticeDisableButtonModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
