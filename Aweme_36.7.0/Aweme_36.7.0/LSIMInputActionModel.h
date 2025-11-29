@class NSString, NSDictionary, UIImage;

@interface LSIMInputActionModel : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *display;
@property (copy, nonatomic) NSString *resource;
@property (copy, nonatomic) NSString *resourceDark;
@property (copy, nonatomic) NSDictionary *resourceConfig;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) UIImage *defaultResourceIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (id)initWithDisplay:(id)a0 actionType:(unsigned long long)a1 config:(id)a2;
- (id)initWithDisplay:(id)a0 actionType:(unsigned long long)a1 config:(id)a2 defaultIcon:(id)a3;
- (void).cxx_destruct;

@end
