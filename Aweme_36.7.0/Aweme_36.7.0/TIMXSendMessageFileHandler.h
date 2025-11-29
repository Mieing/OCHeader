@class TIMXSDKInstance;

@interface TIMXSendMessageFileHandler : NSObject

@property (weak, nonatomic) TIMXSDKInstance *r;

+ (BOOL)handleArrayWithFiles:(id)a0 message:(id)a1 fileIDs:(id)a2 rootObject:(id)a3;
+ (void)applyRemoteFileToDbFile:(id)a0 file:(id)a1 rootObject:(id)a2;
+ (BOOL)applyLocalFileInfoToDBFile:(id)a0 file:(id)a1 rootObject:(id)a2;

- (void).cxx_destruct;

@end
