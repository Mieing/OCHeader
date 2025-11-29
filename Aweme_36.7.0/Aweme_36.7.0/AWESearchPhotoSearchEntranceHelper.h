@interface AWESearchPhotoSearchEntranceHelper : NSObject

+ (void)invokePhotoSearch;
+ (void)showPopOverWithConfigBlock:(id /* block */)a0 clickBlock:(id /* block */)a1;
+ (void)fetchLatestPhotoCompletion:(id /* block */)a0;
+ (void)showPopOverIfNeededWithConfigBlock:(id /* block */)a0 clickBlock:(id /* block */)a1;

@end
