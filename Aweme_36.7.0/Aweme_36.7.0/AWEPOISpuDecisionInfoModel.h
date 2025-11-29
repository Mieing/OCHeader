@class NSString, AWEURLModel;

@interface AWEPOISpuDecisionInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
