@interface AWEPOIAwemeTableViewControllerFactory : NSObject

+ (id)awemeTableVCWithVideoStyle:(unsigned long long)a0 dataController:(id)a1 params:(id)a2;
+ (id)awemeTableVCWithVideoStyle:(unsigned long long)a0 feedSceneType:(unsigned long long)a1 params:(id)a2;
+ (id)dataControllerWithFeedScene:(unsigned long long)a0 params:(id)a1;
+ (id)awemeTableVCWithDataController:(id)a0 params:(id)a1;
+ (id)urlStringForOGCVideoStyleWithParams:(id)a0;
+ (id)trackerDataWithInitParams:(id)a0;
+ (BOOL)openAwemeTableViewController:(id)a0;

@end
