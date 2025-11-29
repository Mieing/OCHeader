@class FinderLivePaymentSetting, NSString;
@protocol MMFinderLiveNoticeDetailsPreviewDelegate;

@interface MMFinderLiveNoticeDetailsPreviewModel : NSObject

@property (weak, nonatomic) id<MMFinderLiveNoticeDetailsPreviewDelegate> previewDelegate;
@property (retain, nonatomic) FinderLivePaymentSetting *paymentSetting;
@property (nonatomic) int noticeAggregateType;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int noticeStarttimeType;
@property (retain, nonatomic) NSString *introduction;
@property (retain, nonatomic) NSString *introductionExtend;
@property (retain, nonatomic) NSString *discountWording;

- (void).cxx_destruct;

@end
