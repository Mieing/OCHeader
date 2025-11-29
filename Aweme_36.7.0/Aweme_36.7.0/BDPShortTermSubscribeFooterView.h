@class BDPUniqueID, NSString, UILabel, BDPCheckBox, UIButton;

@interface BDPShortTermSubscribeFooterView : UIView {
    NSString *_infoText;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) double labelWidth;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) UIButton *feedCardDetailButton;
@property (nonatomic) BOOL isLabelOnLeft;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (copy, nonatomic) id /* block */ detailClickBlock;

- (void)detailButtonClick;
- (void)onTapss:(id)a0;
- (id)initWithLabelText:(id)a0 viewType:(long long)a1 isLabelOnLeft:(BOOL)a2 uniqueID:(id)a3;
- (void).cxx_destruct;
- (void)setupUI;

@end
