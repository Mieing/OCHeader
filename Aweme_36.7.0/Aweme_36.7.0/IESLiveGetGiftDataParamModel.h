@class NSString, NSArray;

@interface IESLiveGetGiftDataParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *giftId;
@property (copy, nonatomic) NSArray *giftIdList;

+ (id)modelCustomPropertyMapper;

@end
