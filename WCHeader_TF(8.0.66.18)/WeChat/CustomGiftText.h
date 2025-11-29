@class NSString;

@interface CustomGiftText : WXPBGeneratedMessage

@property (nonatomic) BOOL supportCustomText;
@property (nonatomic) unsigned int textLenLimit;
@property (nonatomic) float price;
@property (retain, nonatomic) NSString *customText;
@property (nonatomic) BOOL specificCustomText;
@property (retain, nonatomic) NSString *antispamCustomText;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *componentKey;

+ (void)initialize;

@end
