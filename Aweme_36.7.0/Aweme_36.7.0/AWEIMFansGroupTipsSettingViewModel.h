@class NSString, AWEIMFansGroupMultiselectListViewModel;

@interface AWEIMFansGroupTipsSettingViewModel : NSObject

@property (nonatomic) double animationDuration;
@property (copy, nonatomic) NSString *sendButtonTitle;
@property (retain, nonatomic) AWEIMFansGroupMultiselectListViewModel *multiselectListViewModel;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long settingType;

- (id)panelTitle;
- (double)maxContentLength;
- (id)initWithFansGroupInfoList:(id)a0 settingType:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })panelTotalSize;
- (struct CGSize { double x0; double x1; })panelTitleSize;
- (double)multiselectListHeight;
- (id)panelTitleFont;
- (id)placeHolderAttributesText;
- (id)closeButtonImageName;
- (id)__panelTitleAttributes;
- (struct CGSize { double x0; double x1; })sizeWithString:(id)a0 attributes:(id)a1 maxWidth:(double)a2;
- (id)__placeHolderText;
- (void)batchSetContentWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (double)bottomOffset;

@end
