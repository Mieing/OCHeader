@interface JobFactory : NSObject

+ (id)getBackgroundJob;
+ (id)getQueryJob:(long long)a0;
+ (id)getUploadJob:(long long)a0;

@end
