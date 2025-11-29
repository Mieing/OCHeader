@class NSArray, NSString;

@interface IESECAfterLiveGuideCardWindowCardInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *products;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *jumpTip;
@property (copy, nonatomic) NSString *windowScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
