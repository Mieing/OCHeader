@class NSString, NSDictionary;

@interface LSIMTipModel : NSObject <BDModelCustom>

@property (nonatomic) BOOL bizResult;
@property (nonatomic) BOOL closable;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSDictionary *templateParams;
@property (copy, nonatomic) NSString *bizExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
