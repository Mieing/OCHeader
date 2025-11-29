@class NSString;

@interface IESECCouponButtonTrackModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tagCode;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *productTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)trackParamsWithTagShowScene:(long long)a0 position:(long long)a1;
- (void).cxx_destruct;

@end
