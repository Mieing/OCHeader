@class NSArray, NSString, AWECommonFeedCardModel, AWECommonFeedSectionContext;

@interface AWECommonFeedBaseSectionViewModel : AWEBaseListSectionViewModel <AWECommonFeedSectionViewModelProtocol>

@property (retain, nonatomic) AWECommonFeedCardModel *cardModel;
@property (retain, nonatomic) NSArray *cellModelList;
@property (retain, nonatomic) NSArray *cellClassList;
@property (weak, nonatomic) AWECommonFeedSectionContext *commonFeedSectionContext;
@property (copy, nonatomic) id /* block */ headerClassBlock;
@property (copy, nonatomic) id /* block */ footerClassBlock;
@property (copy, nonatomic) id /* block */ headerHeightBlock;
@property (copy, nonatomic) id /* block */ footerHeightBlock;
@property (copy, nonatomic) id /* block */ configHeaderViewBlock;
@property (copy, nonatomic) id /* block */ configFooterViewBlock;
@property (copy, nonatomic) id /* block */ supplementaryViewWillDisplayBlock;
@property (copy, nonatomic) id /* block */ supplementaryViewDidEndDisplayingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCardModel:(id)a0;
- (void)configCellModels;
- (void).cxx_destruct;

@end
