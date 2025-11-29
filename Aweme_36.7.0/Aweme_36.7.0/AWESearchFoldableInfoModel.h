@class NSString, NSDictionary, AWESearchFoldGradientIconViewConfigModel;

@interface AWESearchFoldableInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double foldHeight;
@property (nonatomic) double initHeight;
@property (nonatomic) double scrollThreshold;
@property (nonatomic) BOOL isFold;
@property (nonatomic) BOOL isScrollPause;
@property (copy, nonatomic) NSString *foldButtonText;
@property (copy, nonatomic) NSString *foldStyle;
@property (nonatomic) long long expandCount;
@property (nonatomic) double expandHeight;
@property (copy, nonatomic) NSString *foldButtonExpandText;
@property (copy, nonatomic) NSString *foldButtonStyleId;
@property (copy, nonatomic) NSDictionary *foldButtonStyleInfo;
@property (copy, nonatomic) AWESearchFoldGradientIconViewConfigModel *foldButtonConfig;
@property (nonatomic) BOOL expandIfLastCardFold;
@property (copy, nonatomic) NSString *expandSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)foldButtonConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
