@class UIColor, NSString, NSDictionary, UIImage;

@interface AWEFriendsRadarPushModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (nonatomic) double titleTextSize;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) UIColor *subtitleTextColor;
@property (nonatomic) double subtitleTextSize;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIColor *buttonTextColor;
@property (nonatomic) double buttonTextSize;
@property (copy, nonatomic) NSString *chatType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleTextColorJSONTransformer;
+ (id)subtitleTextColorJSONTransformer;
+ (id)buttonTextColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
