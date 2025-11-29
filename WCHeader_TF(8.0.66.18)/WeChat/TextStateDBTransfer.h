@protocol TextStateDBTransferDelegate;

@interface TextStateDBTransfer : NSObject

@property BOOL affTransferStatusMainDBFlag;
@property BOOL affTransferStatusCommentDBFlag;
@property BOOL affStatusIsFinish;
@property BOOL affMainStatusDBFusing;
@property BOOL affMessageDBFusing;
@property unsigned int affStatusMainTransferRetryNum;
@property unsigned int affStatusMessageTransferRetryNum;
@property (weak, nonatomic) id<TextStateDBTransferDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)useAffDBTransfer;
+ (void)clearCacheForDebug;
+ (void)debugToast:(id)a0;

- (id)init;
- (BOOL)hasFinishTransferAffMainStatusDB;
- (BOOL)hasFinishTransferAffCommentDB;
- (BOOL)hasFinishAffDBTransfer;
- (void)transferPlatformDataToAffDB;
- (id)getPlatformDBData;
- (void)checkTransferAllFinish;
- (void)dealSelfState;
- (void)dealSelfLike;
- (void)transferCommentDataToAffDB;
- (void)reportDBStateForDaily;
- (void)debugDBStateToast;
- (void).cxx_destruct;

@end
