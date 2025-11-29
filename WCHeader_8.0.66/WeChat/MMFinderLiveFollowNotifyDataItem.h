@class MMFinderLiveFollowNotifyMsgInfo, NSString;

@interface MMFinderLiveFollowNotifyDataItem : MMLiveCommentDataItem

@property (retain, nonatomic) MMFinderLiveFollowNotifyMsgInfo *followNotifyMsgInfo;
@property (copy) NSString *suffixContent;
@property (copy) NSString *prefixContent;

- (id)initWithFollowNotifyMsgInfo:(id)a0;
- (id)getDisplayContentWithPrefix:(id)a0;
- (void)updateData;
- (id)createPrefixContent;
- (id)createSuffixContent;
- (void).cxx_destruct;

@end
