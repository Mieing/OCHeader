@class NSString;

@interface QQApiObject : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) NSString *universalLink;
@property (nonatomic) unsigned long long cflag;
@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSString *messageExt;
@property (nonatomic) unsigned long long shareDestType;

- (long long)checkParamValid;
- (void).cxx_destruct;
- (id)init;

@end
