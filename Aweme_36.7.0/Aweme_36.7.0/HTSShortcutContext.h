@class UIApplicationShortcutItem;

@interface HTSShortcutContext : NSObject

@property (retain, nonatomic) UIApplicationShortcutItem *item;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;

@end
