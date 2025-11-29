@class NSString, WCCanvasComponentItem, UIView, MMTableViewInfo;
@protocol WCCanvasActionSheetDelegate, WCCanvasComponentDelegate;

@interface WCCanvasActionSheet : MMUIView {
    UIView *_backgroundMask;
    UIView *_headerView;
    MMTableViewInfo *_tableViewInfo;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) WCCanvasComponentItem *bodyItem;
@property (weak, nonatomic) id<WCCanvasComponentDelegate> bodyDelegate;
@property (weak, nonatomic) id<WCCanvasActionSheetDelegate> delegate;
@property (nonatomic) BOOL showCancelAction;
@property (nonatomic) BOOL hideHeader;

- (void)showInView:(id)a0;
- (void)makeBodyCell:(id)a0 cellInfo:(id)a1;
- (void)cancel;
- (void)onCancel:(id)a0;
- (void)clear;
- (void).cxx_destruct;

@end
