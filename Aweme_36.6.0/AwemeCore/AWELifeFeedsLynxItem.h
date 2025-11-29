@class AWELifeFeedsPageContext, NSString, NSMutableDictionary, UIView;
@protocol AnnieXContainerBaseProtocol, AWELifeFeedsLynxItemDelegate;

@interface AWELifeFeedsLynxItem : NSObject

@property (nonatomic) BOOL isReady;
@property (readonly, copy, nonatomic) NSString *containerId;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;
@property (weak, nonatomic) AWELifeFeedsPageContext *pageContext;
@property (weak, nonatomic) id<AWELifeFeedsLynxItemDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *subscribeActionMap;
@property (nonatomic) BOOL didEndLoad;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void)subscribeAction:(id)a0;
- (void)addSubscribeActionList:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
