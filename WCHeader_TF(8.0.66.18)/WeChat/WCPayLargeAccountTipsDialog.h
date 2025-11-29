@class NSString;

@interface WCPayLargeAccountTipsDialog : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *button_name;
@property (retain, nonatomic) NSString *button_jump_url;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
