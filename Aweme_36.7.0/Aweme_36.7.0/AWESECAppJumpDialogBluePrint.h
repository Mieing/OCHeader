@class NSString, AWESECAppJumpDialogActionBluePrint;

@interface AWESECAppJumpDialogBluePrint : NSObject

@property (copy, nonatomic) NSString *heading;
@property (copy, nonatomic) NSString *body;
@property (retain, nonatomic) AWESECAppJumpDialogActionBluePrint *leftAction;
@property (retain, nonatomic) AWESECAppJumpDialogActionBluePrint *rightAction;
@property (nonatomic) BOOL forbidDismissByClickMask;
@property (nonatomic) BOOL isShowOpenFailedToast;

+ (id)defaultBodyString;
+ (id)defaultBluePrint;
+ (id)searchDefaultBluePrint;

- (void).cxx_destruct;
- (id)actions;

@end
