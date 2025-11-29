@class NSArray;
@protocol MMRTCMenuSelectDelegate, MMRTCMenuResponderDelegate, MMRTCMenuEventDelegate;

@interface MMRTCMenuResponder : NSObject

@property (weak, nonatomic) id<MMRTCMenuSelectDelegate> selectDelegate;
@property (weak, nonatomic) id<MMRTCMenuResponderDelegate> responderDelegate;
@property (weak, nonatomic) id<MMRTCMenuEventDelegate> eventDelegate;
@property (nonatomic) BOOL disableLongPress;
@property (nonatomic) BOOL disableSelectAll;
@property (nonatomic) BOOL disableForward;
@property (nonatomic) BOOL disableCopy;
@property (nonatomic) BOOL isEnablePartialRefer;
@property (retain, nonatomic) NSArray *originMenuItems;
@property (retain, nonatomic) NSArray *originExtraMenuItems;
@property (nonatomic) BOOL useSystemMenu;

- (id)getMsgWrap;
- (void)onReferSelectedText;
- (void)onSelectTextForward:(id)a0;
- (void)onSelectTextCopy:(id)a0;
- (void)onSelectSearch:(id)a0;
- (void)onSelectAllText:(id)a0;
- (BOOL)canRespondsToMenuAction:(SEL)a0;
- (BOOL)canMatchMenuItemWithSelector:(SEL)a0 Menus:(id)a1;
- (id)getMenuActionResponder:(SEL)a0;
- (id)getSelectMenuItem;
- (void)onMenuHidden;
- (void).cxx_destruct;

@end
