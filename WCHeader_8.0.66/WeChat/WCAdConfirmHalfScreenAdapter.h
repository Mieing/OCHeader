@class NSString, NSDictionary, MMPageSheetAdapter;
@protocol WCAdConfirmHalfScreenAdapterDelegate;

@interface WCAdConfirmHalfScreenAdapter : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>

@property (retain, nonatomic) MMPageSheetAdapter *adapter;
@property (retain, nonatomic) NSString *requestIcon;
@property (retain, nonatomic) NSString *requestName;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *confirmInfo;
@property (retain, nonatomic) NSString *confirmDesc;
@property (retain, nonatomic) NSString *confirmEmptyDesc;
@property (retain, nonatomic) NSDictionary *extInfo;
@property (weak, nonatomic) id<WCAdConfirmHalfScreenAdapterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequestIcon:(id)a0 requestName:(id)a1 desc:(id)a2 confirmInfo:(id)a3 confirmDesc:(id)a4 confirmEmptyDesc:(id)a5 extInfo:(id)a6;
- (void)genHalfScreenView;
- (void)showHalfScreenView;
- (void)hideHalfScreenView;
- (id)getRequestInfoView;
- (id)getDescInfoView;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void).cxx_destruct;

@end
