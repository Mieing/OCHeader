@class WCAdFinderLiveNoticeInfo, NSString;
@protocol WCAdHalfScreenFinderLiveNoticeViewDelegate;

@interface WCAdHalfScreenFinderLiveNoticeView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) WCAdFinderLiveNoticeInfo *finderLiveNoticeInfo;
@property (weak, nonatomic) id<WCAdHalfScreenFinderLiveNoticeViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderLiveNoticeInfo:(id)a0;
- (void)initSubview;
- (void)initCommonUI;
- (void)initDetailUI;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
