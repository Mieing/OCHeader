@class NSString, OrderWording;

@interface OrderLabel : WXPBGeneratedMessage

@property (nonatomic) unsigned int labelType;
@property (retain, nonatomic) OrderWording *wording;
@property (retain, nonatomic) NSString *imgUrl;

+ (void)initialize;

@end
