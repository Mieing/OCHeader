@class NSString, NSDictionary, AWEPLVPageContext, AWEPLVConstantSectionConfigModel;
@protocol AWEPLVSectionModelProtocol;

@interface AWEPLVConstantSectionViewModel : AWEPadBaseSectionViewModel <AWEPLVSectionViewModelProtocol> {
    BOOL enableGrid;
}

@property (retain, nonatomic) AWEPLVConstantSectionConfigModel *sectionConfig;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (BOOL)enableGrid;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })borderPadding;
- (void)setEnableGrid:(BOOL)a0;
- (void).cxx_destruct;
- (id)sectionBackgroundColor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
