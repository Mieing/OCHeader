@class NSString, NSMutableArray;

@interface KindaActionSheet : NSObject <WCActionSheetDelegate, MMKActionSheet> {
    int _destructiveIndex;
    NSMutableArray *_callbacks;
    NSMutableArray *_buttonTitles;
    NSString *_cancelTitle;
    NSString *_actionSheetTitle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setTitle:(id)a0;
- (void)setCancelButtonTitle:(id)a0;
- (void)addButtonImpl:(id)a0 callback:(id)a1;
- (void)show;
- (void)setDestructiveIndex:(int)a0;
- (BOOL)isShowing;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
