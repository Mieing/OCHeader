@class UIImage, NSString, NSArray;

@interface AWEMessageReachNativeDialogDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long style;
@property (nonatomic) long long iconType;
@property (retain, nonatomic) UIImage *iconPlaceHolder;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL disableClickMask;
@property (nonatomic) long long closeIconStyle;
@property (nonatomic) long long dragDismiss;
@property (nonatomic) BOOL pauseFeedPlay;
@property (copy, nonatomic) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEqualDataModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
