@interface AWESearchPhotoSearchEntranceDisplayStrategy : NSObject

+ (double)timeNow;
+ (BOOL)entrancePopOverEnable;
+ (void)asyncGetLatestPhotoCreateTimeCompletion:(id /* block */)a0;
+ (double)latestPhotoCreateTime;
+ (void)needShowPopOverWithCompletion:(id /* block */)a0;
+ (void)invokePhotoSearch;

@end
