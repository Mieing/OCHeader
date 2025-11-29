@class NSSet, NSMutableDictionary, NSArray;

@interface FBSDKEventBindingManager : NSObject {
    BOOL isStarted;
    NSMutableDictionary *reactBindings;
    NSSet *validClasses;
    BOOL hasReactNative;
    NSArray *eventBindings;
}

+ (id)parseArray:(id)a0;

- (id)init;
- (id)initWithJSON:(id)a0;
- (void)start;
- (void)rematchBindings;
- (void)matchSubviewsIn:(id)a0;
- (void)matchView:(id)a0 delegate:(id)a1;
- (void)updateBindings:(id)a0;
- (void).cxx_destruct;

@end
