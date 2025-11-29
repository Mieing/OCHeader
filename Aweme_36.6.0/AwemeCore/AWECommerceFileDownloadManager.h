@class NSString, NSMutableDictionary;

@interface AWECommerceFileDownloadManager : NSObject <AWECommerceFileDownloadManager>

@property (retain, nonatomic) NSMutableDictionary *fileMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

@end
