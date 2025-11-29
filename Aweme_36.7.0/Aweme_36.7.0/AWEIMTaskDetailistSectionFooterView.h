@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol AWEIMTaskDetailistSectionHeaderFooterViewDelegate;

@interface AWEIMTaskDetailistSectionFooterView : UIView <AWEIMRendererProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIButton *button;
@property (weak, nonatomic) id<AWEIMTaskDetailistSectionHeaderFooterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
