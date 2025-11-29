@class NSString;

@interface LSIMTipTemplateModel : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *jumpUrl;
@property (readonly, copy, nonatomic) NSString *templateKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
