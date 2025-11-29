@class UILabel, NSString, UIView;

@interface AWEIMUserListTipFooterView : UIView <AWEIMUserListHideTipFooterProtocol>

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UILabel *tipLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)footerView;

@end
