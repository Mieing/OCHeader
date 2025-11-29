@interface AFDPureModePageSwiftWrapper : NSObject

+ (void)trackDownloadFinishWithAwemeModel:(id)a0 indicesToDownload:(id)a1 logExtraDict:(id)a2 referString:(id)a3;
+ (void)downloadImageWithAweme:(id)a0 indicesToDownload:(id)a1 logExtraDict:(id)a2 referString:(id)a3;
+ (BOOL)canDownloadImageWithAweme:(id)a0;
+ (BOOL)enableCustomPaging;
+ (BOOL)customPagingTargetContentOffsetGetOpt;
+ (void)configPageSnapControllerForScrollView:(id)a0;

@end
