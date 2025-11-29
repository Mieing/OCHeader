@class IESLiveRelatedLiveBaseBtn, NSString, IESLiveRelatedLiveEntryItem;

@interface IESLiveRelatedLiveTabsEntryView : UIView

@property (retain, nonatomic) IESLiveRelatedLiveBaseBtn *relatedLiveBtn;
@property (copy, nonatomic) NSString *bgColor;
@property (retain, nonatomic) IESLiveRelatedLiveEntryItem *item;
@property (copy, nonatomic) id /* block */ portraitEnterViewDidClick;

- (void)updateWithEntryItem:(id)a0;
- (id)initWithEntryItem:(id)a0;
- (void)updatePaidTag:(id)a0;
- (struct CGSize { double x0; double x1; })entryViewSize;
- (void)enterViewDidClick;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)updateTitle:(id)a0;

@end
