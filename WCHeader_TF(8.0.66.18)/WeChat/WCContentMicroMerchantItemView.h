@class WCDataItem, WCMicroMerchantFeedsGroup, RichTextView, MMUILabel;

@interface WCContentMicroMerchantItemView : WCContentItemBaseView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCMicroMerchantFeedsGroup *wsGroup;
@property (retain, nonatomic) RichTextView *leftTitle;
@property (retain, nonatomic) MMUILabel *rightTitle;

+ (double)heightForDataItem:(id)a0;

- (void)initViewsWithWCDataItem:(id)a0;
- (void)throwUrlMessage;
- (void)onVoiceOverClick;
- (void)openMicroMerchantSubTimeline;
- (void).cxx_destruct;

@end
