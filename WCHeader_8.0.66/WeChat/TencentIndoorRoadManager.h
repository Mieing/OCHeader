@class NSString;

@interface TencentIndoorRoadManager : NSObject

@property (retain) NSString *curBuildid;

+ (id)sharedInstance;

- (void)resetBuildid;
- (BOOL)downloadIndoorRoadDataWithBuildid:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
