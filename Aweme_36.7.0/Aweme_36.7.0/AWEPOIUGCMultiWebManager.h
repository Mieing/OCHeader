@class NSArray, NSMutableDictionary;

@interface AWEPOIUGCMultiWebManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *webManagerMap;
@property (copy, nonatomic) NSArray *albumImageList;

+ (id)sharedManager;

- (void)handleBroadcastNotification:(id)a0;
- (void)lynxContainerDealloc:(id)a0;
- (void)handleH5Dealloc:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
