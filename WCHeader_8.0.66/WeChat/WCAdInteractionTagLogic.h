@class WCDataItem, WCAdPagView;

@interface WCAdInteractionTagLogic : WCAdvertiseOperationLogicBase

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) WCAdPagView *activeIconPagViewCache;
@property (nonatomic) BOOL isInteractionActive;

+ (id)getLogicWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;

- (id)initWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;
- (void)dealloc;
- (void)realSetInteractionNotActivated;
- (void)notifyInteractionActiveStateChanged;
- (void).cxx_destruct;

@end
