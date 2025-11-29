@class NSString, NSMutableDictionary, AWEGrouponLifeFeedsPageContext, UIView;
@protocol AnnieXContainerBaseProtocol, AWEGrouponLifeFeedsLynxItemDelegate;

@interface AWEGrouponLifeFeedsLynxItem : NSObject

@property (nonatomic) BOOL isReady;
@property (readonly, copy, nonatomic) NSString *containerId;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;
@property (weak, nonatomic) AWEGrouponLifeFeedsPageContext *pageContext;
@property (weak, nonatomic) id<AWEGrouponLifeFeedsLynxItemDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *subscribeActionMap;
@property (nonatomic) BOOL didEndLoad;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void)subscribeAction:(id)a0;
- (void)addSubscribeActionList:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
