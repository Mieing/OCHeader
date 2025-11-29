@class NSString, NSArray, NSData, NSMutableArray;

@interface WCFinderSearchFeedTabSession : NSObject

@property (retain, nonatomic) NSMutableArray *mutFeedItems;
@property (retain, nonatomic) NSString *tabName;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) NSArray *feedItems;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) long long reportTabId;
@property (nonatomic) int inlineSearchScene;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isError;
@property (retain, nonatomic) NSString *reqId;

- (void)setFeedItems:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })appendDatas:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
