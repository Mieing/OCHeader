@class NSString, NSDictionary, AWEPLVPageContext, AWEPadBreakPointHorizontalCellController;
@protocol AWEPLVSectionModelProtocol;

@interface AWEPLVChildSkyLightSectionViewModel : AWEPadPolymericChannelSlidableSectionViewModel <AWEPLVSectionViewModelProtocol>

@property (retain, nonatomic) AWEPadBreakPointHorizontalCellController *breakPointHorizontalCellController;
@property (retain, nonatomic) id<AWEPLVSectionModelProtocol> sectionModel;
@property (nonatomic) long long sectionIndex;
@property (readonly, nonatomic) BOOL canShow;
@property (nonatomic) BOOL enableNewArch;
@property (nonatomic) long long enterScene;
@property (nonatomic) long long maxLines;
@property (copy, nonatomic) NSString *sectionName;
@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logPB;
@property (retain, nonatomic) AWEPLVPageContext *pageContext;
@property (retain, nonatomic) id sectionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })borderPadding;
- (void)triggerCollectionViewScrollToTop;
- (void).cxx_destruct;
- (double)minimumLineSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
