@class NSString;

@interface AWEUserHelpDeskInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *textBlack;
@property (copy, nonatomic) NSString *textGrey;
@property (copy, nonatomic) NSString *helpDeskJumpUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
