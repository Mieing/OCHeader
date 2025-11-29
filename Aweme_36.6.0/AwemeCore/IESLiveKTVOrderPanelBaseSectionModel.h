@class UIColor, IESLiveKTVOrderPanelViewModel;
@protocol IESLiveKTVOrderPanelProtocol;

@interface IESLiveKTVOrderPanelBaseSectionModel : NSObject <IGListDiffable>

@property (weak, nonatomic) IESLiveKTVOrderPanelViewModel *fatherModel;
@property (nonatomic) struct CGSize { double width; double height; } sectionSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) id<IESLiveKTVOrderPanelProtocol> panelModel;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) BOOL needLayoutSubView;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)refreshModelWithFatherModel:(id)a0;
- (void).cxx_destruct;
- (long long)index;
- (unsigned long long)sectionType;
- (Class)sectionClass;

@end
