@class NSString, NSDictionary;

@interface LSIMMessageCardCancelModelButtonItem : NSObject

@property (copy, nonatomic) NSString *buttonType;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *eventParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
