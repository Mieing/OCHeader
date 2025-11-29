@class NSString, WCFinderFeedContentVM, WCFinderContact;
@protocol WCFinderPhotoFeedDetailViewModelDelegate;

@interface WCFinderPhotoFeedDetailViewModel : NSObject

@property (nonatomic) unsigned long long commentScene;
@property (retain, nonatomic) WCFinderContact *finderContact;
@property (nonatomic) int customScene;
@property (copy, nonatomic) NSString *encryptedTid;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) BOOL isPhotoFeed;
@property (weak, nonatomic) id<WCFinderPhotoFeedDetailViewModelDelegate> delegate;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) int scene;
@property (nonatomic) unsigned long long commentSwitchType;

- (id)initWithTid:(id)a0 nonceID:(id)a1 customScene:(int)a2;
- (id)initWithEncryptedTid:(id)a0 nonceID:(id)a1 customScene:(int)a2;
- (id)initWithTid:(id)a0 encryptedTid:(id)a1 nonceID:(id)a2 customScene:(int)a3;
- (void)startToLoadDataItem;
- (void)setupInitState;
- (void)setupWithDataItem:(id)a0;
- (id)dataItem;
- (void)asyncFetchDataItemWithCompletion:(id /* block */)a0;
- (void)_handleAsyncFetchError:(int)a0 msg:(id)a1;
- (void)updateLocalDataItem:(id /* block */)a0;
- (BOOL)isSelfPostFeed;
- (void).cxx_destruct;

@end
