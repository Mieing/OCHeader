@class NSString, NSArray;

@interface IESLiveShortTouchInfoModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shortTouchURL;
@property (copy, nonatomic) NSString *shortTouchFallbackURL;
@property (nonatomic) int containerType;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (copy, nonatomic) NSString *imgURL;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) int showAnimation;
@property (nonatomic) int animationType;
@property (nonatomic) int animationQuota;
@property (retain, nonatomic) NSArray *subItemListArray;
@property (copy, nonatomic) NSString *accessibleName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
