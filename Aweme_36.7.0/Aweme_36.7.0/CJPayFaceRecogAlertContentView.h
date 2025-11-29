@class UIImageView, UILabel, CJPayCommonProtocolModel, CJPayCommonProtocolView;
@protocol CJPayTrackerProtocol;

@interface CJPayFaceRecogAlertContentView : UIView

@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIImageView *faceImageView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayCommonProtocolModel *protocolModel;
@property (copy, nonatomic) id /* block */ protocolClickBlock;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;

+ (id)attributesWithForegroundColor:(id)a0 alignment:(long long)a1;
+ (id)highlightColor;
+ (id)attributes;

- (void)p_setupUIWithType:(unsigned long long)a0 shouldShowProtocolView:(BOOL)a1;
- (id)initWithProtocolModel:(id)a0 showType:(unsigned long long)a1 shouldShowProtocolView:(BOOL)a2 protocolDidClick:(id /* block */)a3;
- (void)updateWithSubTitle:(id)a0;
- (void).cxx_destruct;
- (void)updateWithTitle:(id)a0;

@end
