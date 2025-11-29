@class AWEIMMessage, NSArray;
@protocol AWEIMMessageInteractiveDataDelegate;

@interface AWEIMMessageInteractiveDataManager : NSObject

@property (nonatomic) BOOL isFetchingExchangeInfo;
@property (weak, nonatomic) id<AWEIMMessageInteractiveDataDelegate> delegate;
@property (retain, nonatomic) AWEIMMessage *mesasge;
@property (copy, nonatomic) NSArray *doubleLikeUserList;
@property (copy, nonatomic) NSArray *readUserList;

- (void)fetchWatchOnceReadInfo;
- (void)__configReadUserList;
- (void).cxx_destruct;

@end
