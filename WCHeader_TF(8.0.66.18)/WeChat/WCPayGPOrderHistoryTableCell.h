@class MMHeadImageView, UIView, AAListRecord, MMUILabel;

@interface WCPayGPOrderHistoryTableCell : MMTableViewCell

@property (retain, nonatomic) AAListRecord *recordData;
@property (retain, nonatomic) MMHeadImageView *headImgView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) MMUILabel *subLabel;
@property (retain, nonatomic) MMUILabel *launchDateLabel;
@property (retain, nonatomic) MMUILabel *moneyLabel;
@property (retain, nonatomic) MMUILabel *moneyUnitLabel;
@property (retain, nonatomic) MMUILabel *statusLabel;
@property (retain, nonatomic) UIView *sepLine;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupContentView;
- (void)updateContentWithRecordData:(id)a0 recordScene:(unsigned long long)a1;
- (void).cxx_destruct;

@end
