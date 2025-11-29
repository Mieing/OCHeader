@class NSString, AWEEcommerceSearchPathHintCard;

@interface AWEEcomSearchResultPopupModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEEcommerceSearchPathHintCard *pathHintCard;
@property (nonatomic) BOOL useServerUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pathHintCardJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
