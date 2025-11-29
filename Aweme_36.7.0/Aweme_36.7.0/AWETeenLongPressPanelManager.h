@interface AWETeenLongPressPanelManager : NSObject

@property (nonatomic) BOOL isPanelShowing;

+ (BOOL)isNewStyleLongPressPanelEnable;
+ (id)sharedManager;

@end
