@class NSNumber, NSString, NSDictionary;

@interface IESECMallPopupConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *width_percent;
@property (copy, nonatomic) NSNumber *height_percent;
@property (copy, nonatomic) NSNumber *use_anim;
@property (copy, nonatomic) NSString *mask_color;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) BOOL grayEnable;
@property (nonatomic) long long widthPct;
@property (nonatomic) long long heightPct;
@property (copy, nonatomic) NSString *maskColor;
@property (nonatomic) BOOL maskClickClose;
@property (nonatomic) BOOL maskInterceptEvent;
@property (nonatomic) long long enterType;
@property (nonatomic) BOOL useAnim;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcm;
@property (nonatomic) BOOL isOutContainer;
@property (nonatomic) BOOL useGlobalLifeCycle;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enterTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
