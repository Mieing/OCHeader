@class NSMutableSet;

@interface HTSLiveNetworkUtilities : NSObject {
    NSMutableSet *_observerSet;
}

+ (id)connectMethodName;
+ (BOOL)isWiFiConnected;
+ (BOOL)is2GConnected;
+ (BOOL)is3GConnected;
+ (BOOL)is4GConnected;
+ (BOOL)is5GConnected;
+ (BOOL)isNetworkConnected;

- (void).cxx_destruct;

@end
