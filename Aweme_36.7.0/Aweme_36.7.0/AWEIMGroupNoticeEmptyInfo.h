@class NSString;

@interface AWEIMGroupNoticeEmptyInfo : IESIMBaseApiModel

@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
