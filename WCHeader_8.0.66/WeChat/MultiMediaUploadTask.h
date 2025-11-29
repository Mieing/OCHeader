@class MultiMediaUploadBaseState, NSString, FavoritesItemDataField, CMessageWrap;
@protocol MultiMediaUploadTaskDelegate;

@interface MultiMediaUploadTask : NSObject <MultiMediaUploadTaskStateDelegate>

@property (nonatomic) BOOL isFromFav;
@property (nonatomic) BOOL isStopped;
@property (nonatomic) BOOL isHadUploadData;
@property (retain, nonatomic) MultiMediaUploadBaseState *state;
@property (retain, nonatomic) NSString *taskIdentifier;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) FavoritesItemDataField *dataField;
@property (weak, nonatomic) id<MultiMediaUploadTaskDelegate> delegate;
@property (nonatomic) BOOL isLargeFile;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *fakeAeskey;
@property (retain, nonatomic) NSString *fakeSignature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsgWrap:(id)a0 recordData:(id)a1;
- (id)initWithMsgWrap:(id)a0 recordData:(id)a1 isFromFav:(BOOL)a2;
- (void)start;
- (void)stop;
- (id)tryGenFavDownloadDataState;
- (void)changeToState:(id)a0;
- (id)getMessageWrap;
- (id)getDataField;
- (BOOL)isCanCheckHitUpload;
- (void)setHadUploadData;
- (void)onUploadProgressChangeWithTotal:(unsigned long long)a0 finished:(unsigned long long)a1;
- (void)onUploadTaskProcessSucc;
- (void)onUploadTaskProcessFailType:(int)a0;
- (void).cxx_destruct;

@end
