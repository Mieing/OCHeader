@class NSString;

@interface AWEListenFeedListenLaterCache : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) BOOL needShowRecoverToast;

- (id)initWithItemID:(id)a0 isFinished:(BOOL)a1;
- (void).cxx_destruct;

@end
