@class NSMutableDictionary;
@protocol AWENormalModeTabBarIconDownloadManagerDelegate;

@interface AWENormalModeTabBarIconDownloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *tabIconDownloadTaskMap;
@property (weak, nonatomic) id<AWENormalModeTabBarIconDownloadManagerDelegate> delegate;

- (void)p_downloadFinishedWithTask:(id)a0 result:(BOOL)a1 normalImage:(id)a2 selectedImage:(id)a3;
- (void)startDownloadWithTabID:(id)a0 URLModel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
