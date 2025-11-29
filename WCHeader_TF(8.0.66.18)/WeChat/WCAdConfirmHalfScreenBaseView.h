@class NSString, WCAdConfirmHalfScreenBaseInfo, MMWebImageView, MMUILabel;
@protocol WCAdConfirmHalfScreenBaseViewDelegate;

@interface WCAdConfirmHalfScreenBaseView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) WCAdConfirmHalfScreenBaseInfo *confirmInfo;
@property (retain, nonatomic) MMWebImageView *head;
@property (retain, nonatomic) MMUILabel *name;
@property (retain, nonatomic) MMUILabel *title;
@property (retain, nonatomic) MMUILabel *desc;
@property (retain, nonatomic) MMUILabel *extraDesc;
@property (weak, nonatomic) id<WCAdConfirmHalfScreenBaseViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfirmInfo:(id)a0;
- (void)initCommonUI;
- (void)initConfirmUI;
- (id)genLabel:(int)a0;
- (id)fetchAdContent:(int)a0;
- (id)fetchFont:(int)a0;
- (double)fetchLabelMaxWidth:(int)a0;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)pageSheetDidDisappear;
- (void).cxx_destruct;

@end
