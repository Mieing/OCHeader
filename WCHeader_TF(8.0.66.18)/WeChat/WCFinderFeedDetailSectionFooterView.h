@class NSLayoutConstraint, NSString, UIView;

@interface WCFinderFeedDetailSectionFooterView : UITableViewHeaderFooterView <WCGeneralMonitorCellProtocol>

@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) NSLayoutConstraint *leadingLayoutConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultLeadingPadding;

- (id)initWithReuseIdentifier:(id)a0;
- (void)setCustomBgColor:(id)a0;
- (void)setLeadingPadding:(double)a0;
- (id)getGeneralMonitorCellBizId;
- (void).cxx_destruct;

@end
