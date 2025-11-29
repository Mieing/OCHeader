@class NSOperationQueue, AWEVideoDraftModel, NSString;

@interface AWEVideoDraftBoxCollectionCellModel : NSObject

@property (retain) NSOperationQueue *queue;
@property (retain) AWEVideoDraftModel *draft;
@property (copy) NSString *monthText;
@property (copy) NSString *dayText;
@property (copy, nonatomic) NSString *dateText;
@property (copy) NSString *musicId;
@property (copy) NSString *needPropID;
@property (nonatomic) BOOL cleanType;
@property (copy, nonatomic) NSString *draftSizeDes;
@property (nonatomic) long long draftSize;
@property (copy) NSString *enterMethod;

+ (id)appropriateSize:(unsigned long long)a0;
+ (BOOL)useNewSizeFormat;
+ (id)cellModelsWithDrafts:(id)a0 queue:(id)a1 cleanType:(BOOL)a2 enterMethod:(id)a3;
+ (void)updateTimeStringWithArray:(id)a0;

- (void)p_updateDraftIfNeededWithCompletion:(id /* block */)a0 retryCount:(long long)a1;
- (void)resetWithDraft:(id)a0;
- (void)updateTimeStringWithPreviousModel:(id)a0;
- (void)updateDraftIfNeededWithCompletion:(id /* block */)a0;
- (BOOL)valid;
- (void).cxx_destruct;

@end
