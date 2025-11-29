@class NSString, NSMutableArray, NSArray;

@interface LSIMAlertController : NSObject <LSIMAlertControllerProtocol>

@property (retain, nonatomic) NSMutableArray *modifyActions;
@property (readonly, nonatomic) long long alertStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) id body;
@property (readonly, nonatomic) NSArray *actions;
@property (nonatomic) BOOL forbidDismissByClickMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alertControllerWithStyle:(long long)a0;
+ (id)alertControllerWithStyle:(long long)a0 title:(id)a1 subtitle:(id)a2 actions:(id)a3;

- (void)dismiss;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (void)addActions:(id)a0;
- (void)showOnViewController:(id)a0;
- (id)initWithAlertStyle:(long long)a0;

@end
