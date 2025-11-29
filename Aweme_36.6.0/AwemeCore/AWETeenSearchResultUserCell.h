@class AWETeenLynxContainer, AWETeenSearchResultUserView, NSDictionary, NSString, AWEUserModel;

@interface AWETeenSearchResultUserCell : UICollectionViewCell <AWETeenSubscribeMessage, BDXKitViewLifecycleProtocol, AWETeenGeneralCellProtocol>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWETeenSearchResultUserView *userClassicView;
@property (retain, nonatomic) AWETeenLynxContainer *userLynxView;
@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL lynxEnable;
@property (copy, nonatomic) id /* block */ containerViewClickBlock;
@property (copy, nonatomic) id /* block */ followButtonClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)a0;

- (void)view:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)view:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)didUpdateSubscribeStatus:(long long)a0 secUserID:(id)a1;
- (void)configWithModel:(id)a0 extra:(id)a1;
- (void)configWithModel:(id)a0 lynxEnable:(BOOL)a1 extra:(id)a2;
- (void)p_setupUserLynxView;
- (void)p_reloadLynxView;
- (void)p_setupUserClassicView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)dealloc;

@end
