@class NSCache, NSString;

@interface AWEIMEmoticonImageUtility : NSObject <AWEIMEmoticonImageUtilityInterface>

@property (retain, nonatomic) NSCache *imageCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

@end
