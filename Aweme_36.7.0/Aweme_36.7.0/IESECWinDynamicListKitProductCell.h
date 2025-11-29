@class NSString, NSMutableDictionary, UIView;
@protocol IESECWinFlexGoodsCellProtocol, IESECWinProductCellProtocol;

@interface IESECWinDynamicListKitProductCell : IESECWinListKitNativeCell <IESECWinProductCellProtocol> {
    UIView<IESECWinProductCellProtocol> *_contentCell;
    NSMutableDictionary *_contentCellMap;
}

@property (nonatomic) unsigned long long cellType;
@property (weak, nonatomic) id<IESECWinFlexGoodsCellProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentCellClassMap;

- (id)getContentCell:(unsigned long long)a0;
- (void)injectContentCell:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;

@end
