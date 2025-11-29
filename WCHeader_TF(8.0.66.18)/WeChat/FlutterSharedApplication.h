@class UIApplication;

@interface FlutterSharedApplication : NSObject

@property (class, readonly, nonatomic) BOOL isAppExtension;
@property (class, readonly, nonatomic) BOOL isAvailable;
@property (class, readonly, nonatomic) UIApplication *application;

+ (id)sharedApplication;

@end
