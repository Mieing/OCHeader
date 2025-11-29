@class NSString;

@interface AWESpecialRichAwemeDescriptionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSString *extraDescriptionString;
@property (copy, nonatomic) NSString *descriptionSecondString;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
