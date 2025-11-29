@class UIView, AWEProfileExtensionAreaCardModel;
@protocol AWEProfileExtensionAreaCardViewInternalProtocol, AWEProfileExtensionAreaCardControllerProtocol;

@interface AWEProfileExtensionAreaCellViewModel : NSObject

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardControllerProtocol> cardController;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (retain, nonatomic) UIView<AWEProfileExtensionAreaCardViewInternalProtocol> *cardView;
@property (nonatomic) unsigned long long cardIndex;
@property (nonatomic) double customDetailViewWidth;
@property (nonatomic) struct CGSize { double width; double height; } estimatedSize;

- (struct CGSize { double x0; double x1; })cellLayoutSize;
- (void).cxx_destruct;
- (id)init;

@end
