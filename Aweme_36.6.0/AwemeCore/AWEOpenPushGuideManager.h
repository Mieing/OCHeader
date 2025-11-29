@class NSString, NSMapTable;

@interface AWEOpenPushGuideManager : NSObject <AWEOpenPushGuideManagerProtocol>

@property (retain, nonatomic) NSMapTable *guidesInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showGuideWithTitle:(id)a0 linkString:(id)a1 enterFrom:(id)a2 bottomOffset:(double)a3 category:(id)a4 onView:(id)a5 actionBlock:(id /* block */)a6;
+ (void)showGuideWithTitle:(id)a0 linkString:(id)a1 enterFrom:(id)a2 bottomOffset:(double)a3 category:(id)a4 onView:(id)a5 withBottomExtended:(BOOL)a6 actionBlock:(id /* block */)a7;
+ (BOOL)checkShowupCondition;
+ (void)cleanupAllGuides;
+ (void)updateShowupCondition;
+ (void)_cleanupAllGuides;
+ (void)showGuideWithTitle:(id)a0 linkString:(id)a1 enterFrom:(id)a2 bottomOffset:(double)a3 category:(id)a4 actionBlock:(id /* block */)a5;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
