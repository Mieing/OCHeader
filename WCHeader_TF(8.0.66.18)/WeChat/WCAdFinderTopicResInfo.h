@class NSString;

@interface WCAdFinderTopicResInfo : WCAdSliderCardBaseItem <NSCoding>

@property (retain, nonatomic) NSString *avatar;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *barBgColor;
@property (retain, nonatomic) NSString *duration;
@property (retain, nonatomic) NSString *finderType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
