@class NSString, AWERelatedVideoJumpConfirmParamModel;

@interface AWERelatedVideoInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *barName;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long jumpStyle;
@property (nonatomic) long long jumpXiguaType;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *jumpConfirmTitle;
@property (retain, nonatomic) AWERelatedVideoJumpConfirmParamModel *jumpConfirmModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jumpConfirmModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
