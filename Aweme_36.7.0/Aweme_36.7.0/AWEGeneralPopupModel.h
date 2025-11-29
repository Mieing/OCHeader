@class NSString, AWEGeneralPopupContentModel;

@interface AWEGeneralPopupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *id;
@property (nonatomic) long long timing;
@property (nonatomic) long long maximumTimesToShow;
@property (retain, nonatomic) AWEGeneralPopupContentModel *content;
@property (nonatomic) long long showInterval;
@property (copy, nonatomic) NSString *popupStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isNewPopupStyle;
- (void).cxx_destruct;

@end
