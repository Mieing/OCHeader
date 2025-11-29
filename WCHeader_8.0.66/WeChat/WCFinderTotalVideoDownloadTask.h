@class NSString, WCFinderDataItem, NSObject, WCFinderFeedMediaWrap;

@interface WCFinderTotalVideoDownloadTask : NSObject <WCFinderVideoDownLoadMgrExt>

@property (copy, nonatomic) id /* block */ resolver;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap;
@property (copy, nonatomic) NSString *resolvedPath;
@property (retain, nonatomic) NSObject *selfHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)downloadVideoAlone:(id)a0;
- (void)cancel;
- (void)dowloadTimeOut;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)a0;
- (void).cxx_destruct;

@end
