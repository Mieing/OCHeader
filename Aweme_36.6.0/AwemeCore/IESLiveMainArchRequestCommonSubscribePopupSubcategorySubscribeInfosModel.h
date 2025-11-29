@class NSString;

@interface IESLiveMainArchRequestCommonSubscribePopupSubcategorySubscribeInfosModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *subcategoryId;
@property (copy, nonatomic) NSString *subcategoryName;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) BOOL subscribeStatus;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
