@class MMUIActivityIndicatorView, UIImageView, NSString, UILabel;

@interface CLMProcessHalfScreenView : MMPageSheetBaseView <IChatLogDataMgrExt>

@property (nonatomic) unsigned long long dataSize;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *linkLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UIImageView *finishIconView;
@property (copy, nonatomic) NSString *processTitle;
@property (copy, nonatomic) NSString *processTip;
@property (copy, nonatomic) NSString *stopActionName;
@property (copy, nonatomic) NSString *finishTitle;
@property (copy, nonatomic) NSString *finishTip;
@property (copy, nonatomic) id /* block */ deleteLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSize:(unsigned long long)a0 deleteLogic:(id /* block */)a1 processTitle:(id)a2 processTip:(id)a3 stopActionName:(id)a4 finishTitle:(id)a5 finishTip:(id)a6;
- (void)startDeleteLogic;
- (void)onChatLogDataReloadItem;
- (void)onChatLogDataDeleteProgress:(unsigned long long)a0 totalSize:(unsigned long long)a1;
- (id)p_getTitleAttributeString:(id)a0;
- (id)p_getTipAttributeString:(id)a0;
- (void)updateView;
- (void)setupDetailView;
- (void)onTapStopDeleteButton;
- (void).cxx_destruct;

@end
