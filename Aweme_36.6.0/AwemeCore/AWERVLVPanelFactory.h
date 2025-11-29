@class NSDictionary, AWERVDetailPageContext;

@interface AWERVLVPanelFactory : NSObject

@property (retain, nonatomic) NSDictionary *panelViewModelMap;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) NSDictionary *panelViewModelCache;
@property (nonatomic) unsigned long long lastDisplayScene;

- (id)initWithPageContext:(id)a0;
- (id)panelViewModelDicWithScene:(unsigned long long)a0;
- (id)panelWithType:(unsigned long long)a0;
- (id)defaultPanelTypeDic;
- (id)halfPageRightRelatedPanelTypeDic;
- (id)halfPageRightCommentPanelTypeDic;
- (void).cxx_destruct;

@end
