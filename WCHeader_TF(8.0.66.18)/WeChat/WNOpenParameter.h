@class UINavigationController, FavoritesItemDataField, FavoritesItem, CMessageWrap, WCDataItem;

@interface WNOpenParameter : MMObject

@property (weak, nonatomic) UINavigationController *navigationController;
@property (nonatomic) unsigned long long enPushType;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) FavoritesItem *favItem;
@property (retain, nonatomic) FavoritesItemDataField *data;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (retain, nonatomic) WCDataItem *wcDataItem;
@property (nonatomic) BOOL bEditable;
@property (nonatomic) BOOL bForbidShowMoreMenu;
@property (retain, nonatomic) FavoritesItemDataField *scrollToData;
@property (nonatomic) BOOL bNeedTriggerDataEdited;
@property (nonatomic) BOOL bNeedForceShowKeyboard;
@property (nonatomic) unsigned int vcType;
@property (nonatomic) BOOL bAnimate;
@property (nonatomic) BOOL bShowLocateToMsg;

- (id)init;
- (void).cxx_destruct;

@end
