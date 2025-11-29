@class AWELifeFeedsPageViewModel, NSMutableDictionary, AWELifeFeedsPageContext;

@interface AWELifeFeedsComponentCenter : NSObject

@property (readonly, nonatomic) AWELifeFeedsPageViewModel *pageModel;
@property (retain, nonatomic) NSMutableDictionary *componentMap;
@property (weak, nonatomic) AWELifeFeedsPageContext *pageContext;

- (id)componentWithKey:(id)a0;
- (BOOL)registerComponent:(id)a0 withKey:(id)a1;
- (id)componentViewWithKey:(id)a0 componentViewModel:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)buildComponentViewModelWithNode:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
