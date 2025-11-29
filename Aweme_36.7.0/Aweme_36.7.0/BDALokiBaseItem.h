@class BDALokiModel, NSArray, BDALokiConfiguration, UIView, NSObject, BDALokiProfile;
@protocol BDALokiBaseItemDelegate, BDXKitViewProtocol;

@interface BDALokiBaseItem : NSObject

@property (copy, nonatomic) NSArray *jsBridges;
@property (retain, nonatomic) UIView<BDXKitViewProtocol> *kitView;
@property (retain, nonatomic) BDALokiModel *lokiModel;
@property (weak, nonatomic) NSObject<BDALokiBaseItemDelegate> *delegate;
@property (weak, nonatomic) BDALokiProfile *lokiProfile;
@property (weak, nonatomic) BDALokiConfiguration *lokiConfig;

+ (id)generateLokiItemWithModel:(id)a0;

- (void)sendEvent:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)render;
- (id)itemView;
- (void)removeItem;

@end
