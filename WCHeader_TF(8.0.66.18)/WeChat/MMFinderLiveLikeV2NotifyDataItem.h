@class NSString, MMFinderLiveLikeV2MsgInfo;

@interface MMFinderLiveLikeV2NotifyDataItem : MMLiveCommentDataItem

@property (retain, nonatomic) MMFinderLiveLikeV2MsgInfo *likeV2MsgInfo;
@property (copy) NSString *suffixContent;
@property (copy) NSString *prefixContent;

- (id)initWithLikeV2MsgInfo:(id)a0;
- (id)getDisplayContentWithPrefix:(id)a0;
- (void)updateData;
- (id)createPrefixContent;
- (id)createSuffixContent;
- (void).cxx_destruct;

@end
