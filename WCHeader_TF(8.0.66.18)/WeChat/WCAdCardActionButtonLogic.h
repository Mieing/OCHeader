@class WCDataItem, WCAdCardActionButton;
@protocol WCAdCardActionButtonLogicDelegate;

@interface WCAdCardActionButtonLogic : WCAdvertiseOperationLogicBase

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) long long buttonStyle;
@property (retain, nonatomic) WCAdCardActionButton *actionButton;
@property (weak, nonatomic) id<WCAdCardActionButtonLogicDelegate> delegate;

+ (long long)getActionButtonStyleWithDataItem:(id)a0;

- (id)initWithDataItem:(id)a0;
- (id)fetchActionButton;
- (void)onActionBtnClicked;
- (void)start;
- (void)stop;
- (void).cxx_destruct;

@end
