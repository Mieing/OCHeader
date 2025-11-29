@interface AWEHomepageError : NSError

+ (id)hambErrorWithCode:(long long)a0 description:(id)a1;
+ (id)homepageErrorWithCode:(long long)a0 description:(id)a1;
+ (id)combineErrorWithCode:(long long)a0 description:(id)a1;
+ (id)dynamicSchedulingErrorWithCode:(long long)a0 description:(id)a1;

@end
