@class NSString;

@interface IESAccountBindMobileAlertModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *abandonButton;
@property (copy, nonatomic) NSString *confirmButton;
@property (copy, nonatomic) NSString *confirmUrl;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL hasNotice;
@property (copy, nonatomic) NSString *notice_name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
