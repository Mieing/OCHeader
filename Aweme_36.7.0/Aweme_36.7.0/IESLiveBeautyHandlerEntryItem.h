@class NSString, UIView;
@protocol IESLiveBeautyHandlerEntryItemDelegate;

@interface IESLiveBeautyHandlerEntryItem : NSObject

@property (copy, nonatomic) NSString *handlerName;
@property (nonatomic) BOOL isNew;
@property (nonatomic) BOOL isSelect;
@property (copy, nonatomic) id /* block */ adjustViewForEntryItem;
@property (copy, nonatomic) id /* block */ detailViewForEntryItem;
@property (copy, nonatomic) id /* block */ onEntryItemSelected;
@property (copy, nonatomic) id /* block */ onEntryItemDeselected;
@property (copy, nonatomic) id /* block */ onBeautyPanelShow;
@property (copy, nonatomic) id /* block */ onBeautyPanelHide;
@property (nonatomic) BOOL needShowRestButton;
@property (copy, nonatomic) id /* block */ onResetConfirmed;
@property (weak, nonatomic) UIView<IESLiveBeautyHandlerEntryItemDelegate> *delegate;

- (void).cxx_destruct;

@end
