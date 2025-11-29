@class NSString, NSObject;
@protocol AWEIMMangoSharePanelService;

@interface AWEIMMangoSharePanelServiceWrapper : NSProxy <AWEIMMangoSharePanelService>

@property (retain, nonatomic) NSObject<AWEIMMangoSharePanelService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
