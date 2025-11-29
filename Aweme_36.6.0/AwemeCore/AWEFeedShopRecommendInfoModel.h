@class NSString, AWEURLModel;

@interface AWEFeedShopRecommendInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *dishName;
@property (retain, nonatomic) AWEURLModel *headImage;
@property (retain, nonatomic) AWEURLModel *originHeadImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
