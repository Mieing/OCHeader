@class NSArray;

@interface AWEPlayInteractionSnackBarManager : NSObject

@property (copy, nonatomic) NSArray *interceptList;

+ (id)sharedManager;

- (BOOL)isInterceptWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
