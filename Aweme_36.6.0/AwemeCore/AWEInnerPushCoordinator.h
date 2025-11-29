@protocol AWEInnerPushProtocol;

@interface AWEInnerPushCoordinator : NSObject

@property (nonatomic) long long forbidLevel;
@property (weak, nonatomic) id<AWEInnerPushProtocol> currentInnerPush;

+ (id)backgroundColorForWhiteStyle:(BOOL)a0;
+ (id)titleColorForWhiteStyle:(BOOL)a0;
+ (id)contentColorForWhiteStyle:(BOOL)a0;
+ (struct CGColor { } *)borderColorForWhiteStyle:(BOOL)a0;
+ (id)contentVoipColorForWhiteStyle:(BOOL)a0;
+ (id)sharedInstance;

- (void)arrangeDismissInnerPush:(id)a0 context:(id)a1;
- (BOOL)arrangeShowInnerPush:(id)a0 context:(id)a1;
- (void)forbidInnerPushWithLevel:(long long)a0;
- (void)resetForbid;
- (void).cxx_destruct;

@end
