@class NSString;

@interface WCPIPRenderObj : NSObject

@property (copy, nonatomic) NSString *renderId;
@property (copy, nonatomic) NSString *businessName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFrame;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isInForeground;
@property (nonatomic) BOOL isRootViewAppear;

+ (id)createPIPBusinessId:(id)a0 withBusinessName:(id)a1;
+ (id)createPIPBusinessAttachId:(id)a0;

- (BOOL)isNormalizedComplete;
- (BOOL)isNormalizedValid;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onRootViewDidAppear;
- (void)onRootViewWillDisAppear;
- (void).cxx_destruct;

@end
