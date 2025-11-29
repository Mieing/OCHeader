@class AWEIMTaskPlatformDetailCardDetailCellHeaderView, AWEIMTaskPlatformDetailCardDetailDefaultContentView, AWEIMTaskPlatformDetailCardDetailCellFooterView, UIView, NSString;

@interface AWEIMTaskPlatformDetailCardDetailStyleDefaultCell : UITableViewCell <AWEIMRendererProtocol>

@property (retain, nonatomic) AWEIMTaskPlatformDetailCardDetailCellHeaderView *headerView;
@property (retain, nonatomic) AWEIMTaskPlatformDetailCardDetailCellFooterView *footerView;
@property (retain, nonatomic) AWEIMTaskPlatformDetailCardDetailDefaultContentView *detailContentView;
@property (retain, nonatomic) UIView *separatorLineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
