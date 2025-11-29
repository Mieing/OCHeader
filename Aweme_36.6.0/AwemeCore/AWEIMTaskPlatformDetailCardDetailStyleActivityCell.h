@class AWEIMTaskPlatformDetailCardDetailActivityCellHeaderView, AWEIMTaskPlatformDetailCardDetailActivityCellFooterView, NSString, UIView, AWEIMTaskPlatformDetailCardDetailActivityContentView;

@interface AWEIMTaskPlatformDetailCardDetailStyleActivityCell : UITableViewCell <AWEIMRendererProtocol>

@property (retain, nonatomic) AWEIMTaskPlatformDetailCardDetailActivityCellHeaderView *headerView;
@property (retain, nonatomic) AWEIMTaskPlatformDetailCardDetailActivityCellFooterView *footerView;
@property (retain, nonatomic) AWEIMTaskPlatformDetailCardDetailActivityContentView *detailContentView;
@property (retain, nonatomic) UIView *separatorLineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
