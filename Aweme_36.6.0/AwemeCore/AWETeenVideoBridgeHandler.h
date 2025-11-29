@class NSString, NSMutableDictionary;

@interface AWETeenVideoBridgeHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *dataLists;
@property (retain, nonatomic) NSString *currentReactID;
@property (retain, nonatomic) NSMutableDictionary *callbacks;

+ (void)handleOpenAwemeDetailWithParams:(id)a0;
+ (void)handleLoadDetailFeedsWithParams:(id)a0;
+ (void)publishEventVideoStateChangeWithParams:(id)a0;
+ (id)sharedHandler;

- (void)p_addNotifications;
- (void)p_lynxDealloc:(id)a0;
- (void)p_clearDataListWithId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
