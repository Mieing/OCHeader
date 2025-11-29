@class NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WCFinderLongVideoService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *compressWatch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (retain, nonatomic) NSMutableArray *preloadArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)encodingOutputPath:(id)a0;
+ (id)assetForUrl:(id)a0;
+ (id)encodeLongWithoutShortVideoPostSession:(id)a0 config:(id)a1;
+ (BOOL)dataItemIsEnableToEncode:(id)a0;
+ (id)encodeLongWithPostSession:(id)a0;
+ (BOOL)hadExistLongEncoding;
+ (void)encodeFullFor:(id)a0;
+ (BOOL)checkLongVideoResourceValid:(id)a0;
+ (void)encodeSummaryWith:(id)a0 offsetY:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)encodeSummaryFor:(id)a0 offsetY:(id)a1 completion:(id /* block */)a2;
+ (void)stopEncodeForDataItem:(id)a0;
+ (void)registerCompressCallback:(id /* block */)a0 forPostSession:(id)a1 saveToLocal:(BOOL)a2;
+ (void)ensureLongVideoCompress:(id /* block */)a0 forPostSession:(id)a1;
+ (void)updateLongVideoPath:(id)a0 forItem:(id)a1;
+ (void)updateShortVideoPath:(id)a0 forItem:(id)a1;
+ (BOOL)checkHadEncodingForDataItem:(id)a0;
+ (id)playInfoForVideo:(id)a0 playRate:(double)a1 commentScene:(int)a2;
+ (id)playInfoForLocalVideoInfo:(id)a0;
+ (void)preloadVideos:(id)a0;
+ (void)stopAllPreloadVideos;
+ (id)encodeTagPath:(id)a0;
+ (void)saveItemLocal:(id)a0;
+ (void)deleteItemLocal:(id)a0;

- (void)onServiceInit;
- (void)checkExistedItems;
- (void).cxx_destruct;

@end
