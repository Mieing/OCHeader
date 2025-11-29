@class AWEGrouponLifeFeedsPageViewModel, NSMutableDictionary, AWEGrouponLifeFeedsPageContext;

@interface AWEGrouponLifeFeedsComponentCenter : NSObject

@property (readonly, nonatomic) AWEGrouponLifeFeedsPageViewModel *pageModel;
@property (retain, nonatomic) NSMutableDictionary *componentMap;
@property (weak, nonatomic) AWEGrouponLifeFeedsPageContext *pageContext;

- (id)componentWithKey:(id)a0;
- (BOOL)registerComponent:(id)a0 withKey:(id)a1;
- (id)componentViewWithKey:(id)a0 componentViewModel:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)buildComponentViewModelWithNode:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
