@class NSString, AWEPlayletInfoModel;

@interface AWETheaterSectionItemPlayletInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPlayletInfoModel *playletInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playletInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
