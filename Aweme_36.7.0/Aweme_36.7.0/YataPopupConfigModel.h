@class NSDictionary, YataPopupView, YataStructureNode;

@interface YataPopupConfigModel : NSObject

@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) YataPopupView *popupView;
@property (weak, nonatomic) YataStructureNode *node;

- (void).cxx_destruct;

@end
