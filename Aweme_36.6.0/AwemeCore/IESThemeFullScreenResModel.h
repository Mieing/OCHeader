@class NSString;

@interface IESThemeFullScreenResModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *headUrl;
@property (copy, nonatomic) NSString *headUrlPadVertical;
@property (copy, nonatomic) NSString *headUrlPadHorizontal;
@property (copy, nonatomic) NSString *bgUrl;
@property (copy, nonatomic) NSString *bgUrlPadVertical;
@property (copy, nonatomic) NSString *bgUrlPadHorizontal;
@property (copy, nonatomic) NSString *headerAreaColor;
@property (copy, nonatomic) NSString *tagTextColor;
@property (copy, nonatomic) NSString *tagBgColor;
@property (copy, nonatomic) NSString *statusBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
