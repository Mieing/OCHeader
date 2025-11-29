@class UILabel, NSString, UIView;
@protocol IESECUILoadingViewProtocol;

@interface IESECActionLoadingView : UIView <IESECUILoadingViewProtocol>

@property (retain, nonatomic) UIView<IESECUILoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UILabel *noticeLabel;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLoadingType:(unsigned long long)a0 isBlack:(BOOL)a1;
- (id)creatNoticeLabelWithType:(unsigned long long)a0 isBlack:(BOOL)a1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;

@end
