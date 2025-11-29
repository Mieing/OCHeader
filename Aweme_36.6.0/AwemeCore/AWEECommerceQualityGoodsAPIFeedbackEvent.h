@class NSString, AWEBaseApiModel;
@protocol AWEECommerceQualityResponseModelLostRequiredKeys;

@interface AWEECommerceQualityGoodsAPIFeedbackEvent : NSObject

@property (copy, nonatomic) NSString *APIPath;
@property (retain, nonatomic) AWEBaseApiModel<AWEECommerceQualityResponseModelLostRequiredKeys> *responseModel;

- (void).cxx_destruct;

@end
