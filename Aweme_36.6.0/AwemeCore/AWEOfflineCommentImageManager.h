@class NSString;

@interface AWEOfflineCommentImageManager : NSObject <AWECustomWebImageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCacheName;
+ (id)getWebImageConfig;
+ (void)removeCommentImageCache;
+ (unsigned long long)imageTotalSize;
+ (BOOL)enableCache;


@end
