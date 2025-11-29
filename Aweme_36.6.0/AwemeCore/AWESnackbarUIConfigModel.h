@class NSString;

@interface AWESnackbarUIConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *viewStyle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *actionScheme;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) long long autoDismissTime;
@property (copy, nonatomic) NSString *detailContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
