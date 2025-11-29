@class NSString, AWEURLModel;

@interface AWEPOIContentScoreIconUrlModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconKey;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
