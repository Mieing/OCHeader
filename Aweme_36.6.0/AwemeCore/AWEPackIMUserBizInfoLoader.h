@class NSString;

@interface AWEPackIMUserBizInfoLoader : NSObject <AWEPackIMUserLoader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loaderID;
+ (BOOL)enabled:(id)a0;
+ (id)load:(id)a0;


@end
