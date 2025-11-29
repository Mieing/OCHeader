@class AWEEcomAISearchResultNormalSearchHeaderModel, AWEEcomAISearchResultProductInquiryHeaderModel;

@interface AWEEcomAISearchResultHeaderModel : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEEcomAISearchResultNormalSearchHeaderModel *normalSearchModel;
@property (retain, nonatomic) AWEEcomAISearchResultProductInquiryHeaderModel *productInquiryModel;

- (void).cxx_destruct;

@end
