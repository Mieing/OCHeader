@class MMFinderLiveLikeMsgInfo, NSString;

@interface MMFinderLiveLikeNotifyDataItem : MMLiveCommentDataItem

@property (retain, nonatomic) MMFinderLiveLikeMsgInfo *likeMsgInfo;
@property (copy) NSString *suffixContent;
@property (copy) NSString *prefixContent;

- (id)initWithLikeMsgInfo:(id)a0;
- (void)updateLikeMsgInfo:(id)a0;
- (unsigned long long)getHeadUrlCount;
- (id)getDisplayContentWithPrefix:(id)a0;
- (void)updateData;
- (id)createPrefixContent;
- (id)createSuffixContent;
- (void).cxx_destruct;

@end
