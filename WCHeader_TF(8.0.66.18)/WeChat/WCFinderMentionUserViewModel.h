@class NSData, NSMutableArray, NSString;
@protocol WCFinderMentionUserViewModelDelegate;

@interface WCFinderMentionUserViewModel : NSObject <WCFinderContactExt>

@property (retain, nonatomic) NSMutableArray *contactArray;
@property (nonatomic) BOOL hasMoreContact;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *mentionedContactsArray;
@property (weak, nonatomic) id<WCFinderMentionUserViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getContactArray;
- (void)updateViewModelData;
- (void)realUpdateViewModelData;
- (void)fetchLocalContactList;
- (void)fetchMoreData;
- (void)unfollowContact:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)onFinderContactFollowListHasChange:(id)a0;
- (void).cxx_destruct;

@end
