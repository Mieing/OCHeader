@class MMFinderLiveInteractionMsgInfo, NSString;

@interface MMFinderLiveInteractionCommentDataItem : MMLiveCommentDataItem

@property (retain, nonatomic) MMFinderLiveInteractionMsgInfo *interactionMsgInfo;
@property (copy) NSString *suffixContent;
@property (copy) NSString *prefixContent;

- (id)initWithInteractionMsgInfo:(id)a0;
- (id)getDisplayContentWithPrefix:(id)a0;
- (void)updateData;
- (id)createPrefixContent;
- (id)createSuffixContent;
- (void).cxx_destruct;

@end
