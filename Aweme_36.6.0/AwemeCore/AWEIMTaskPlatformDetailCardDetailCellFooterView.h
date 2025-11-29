@class NSString, UILabel, AWEIMTaskDetailistSectionFooterView, UIButton;
@protocol AWEIMTaskPlatformDetailCardDetailCellFooterViewDelegate;

@interface AWEIMTaskPlatformDetailCardDetailCellFooterView : UIView <AWEIMRendererProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) AWEIMTaskDetailistSectionFooterView *footerView;
@property (weak, nonatomic) id<AWEIMTaskPlatformDetailCardDetailCellFooterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
