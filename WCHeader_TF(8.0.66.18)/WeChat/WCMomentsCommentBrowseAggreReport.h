@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WCMomentsCommentBrowseAggreReport : NSObject {
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (retain, nonatomic) NSMutableDictionary *cmtBrowseListDict;
@property (nonatomic) long long snsScene;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL enableUploadByGroup;

+ (id)sharedQueue;

- (id)init;
- (void)_safeAccessStorage:(id /* block */)a0;
- (void)recordExposureForFeed:(id)a0 comment:(id)a1;
- (void)recordClickForFeed:(id)a0 comment:(id)a1;
- (void)recordEmoticonClickForFeed:(id)a0 comment:(id)a1;
- (void)recordPicClickForFeed:(id)a0 comment:(id)a1;
- (void)report;
- (void)reportCmtListStr:(id)a0;
- (void)clearALLCmtData;
- (void).cxx_destruct;

@end
