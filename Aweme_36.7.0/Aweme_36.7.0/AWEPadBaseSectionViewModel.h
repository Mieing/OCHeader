@class UIColor, AWEPadListViewSectionFactory, AWEPLVPageContext, AWEPadListReusableViewBaseController;

@interface AWEPadBaseSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWEPadListReusableViewBaseController *headerViewController;
@property (copy, nonatomic) id /* block */ updateListViewBlock;
@property (retain, nonatomic) AWEPadListViewSectionFactory *sectionFactory;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderPadding;
@property (nonatomic) long long horizontalItemNum;
@property (nonatomic) long long verticalItemNum;
@property (retain, nonatomic) UIColor *sectionBackgroundColor;
@property (nonatomic) BOOL enableGrid;
@property (retain, nonatomic) AWEPLVPageContext *pageContext;

- (void).cxx_destruct;

@end
