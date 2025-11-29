@class NSString;

@interface AWEAntiAddictDefaultMaskConfigModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *mainTitle;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *enterText;
@property (readonly, copy, nonatomic) NSString *exitText;
@property (readonly, copy, nonatomic) NSString *laterRemindText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
