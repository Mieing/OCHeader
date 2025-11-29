@class AWEIMFansGroupMultiselectListViewModel, NSString;

@interface AWEIMBatchSendMessageViewModel : NSObject

@property (nonatomic) double animationDuration;
@property (retain, nonatomic) AWEIMFansGroupMultiselectListViewModel *multiselectListViewModel;
@property (copy, nonatomic) NSString *sendButtonTitle;
@property (nonatomic) BOOL sendButtonEnable;
@property (nonatomic) BOOL hasMore;

- (id)panelTitle;
- (void)__addKVOController;
- (id)initWithFansGroupInfoList:(id)a0;
- (struct CGSize { double x0; double x1; })panelTotalSize;
- (struct CGSize { double x0; double x1; })panelTitleSize;
- (double)multiselectListHeight;
- (id)panelTitleFont;
- (id)placeHolderAttributesText;
- (id)closeButtonImageName;
- (id)__panelTitleAttributes;
- (struct CGSize { double x0; double x1; })sizeWithString:(id)a0 attributes:(id)a1 maxWidth:(double)a2;
- (id)__placeHolderText;
- (void).cxx_destruct;
- (double)bottomOffset;

@end
