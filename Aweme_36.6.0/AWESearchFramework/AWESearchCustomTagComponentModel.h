@class NSString;

@interface AWESearchCustomTagComponentModel : AWESearchComponentBasicModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *darkTextColor;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *darkBgColor;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *darkBorderColor;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
