@class NSString;

@interface IESECLiveGoodsRitTagTrackModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tagCode;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *productTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)trackParamsWithTagShowPosition:(long long)a0;
- (void).cxx_destruct;

@end
