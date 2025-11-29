@class NSData, CameraScanGoodsItemViewModel;
@protocol CameraScanGoodsExtCGITaskDelegate;

@interface CameraScanGoodsExtCGITask : MMObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int taskId;
@property (nonatomic) unsigned long long sessionId;
@property (retain, nonatomic) NSData *uploadImageData;
@property (nonatomic) struct CGSize { double width; double height; } uploadImageSize;
@property (retain, nonatomic) CameraScanGoodsItemViewModel *itemVM;
@property (weak, nonatomic) id<CameraScanGoodsExtCGITaskDelegate> delegate;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isNeedPreload;

- (id)initWithItemViewModel:(id)a0 sessionId:(unsigned long long)a1;
- (void)dealloc;
- (void)start;
- (void)end;
- (void)genUploadImageData;
- (unsigned long long)uploadImageEncodeType;
- (void)startUploadItem;
- (void)handleUploadResponse:(id)a0;
- (void)__callDelegateTaskUploadDone;
- (void)startExchanedItemInfo;
- (void)handleExchanedItemInfoResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
