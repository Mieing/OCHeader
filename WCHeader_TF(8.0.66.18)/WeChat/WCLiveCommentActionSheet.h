@class MMLiveCommentDataItem, NSString;

@interface WCLiveCommentActionSheet : WCLiveActionSheet <WCActionSheetDelegate>

@property (retain, nonatomic) MMLiveCommentDataItem *commentItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCommentItem:(id)a0;
- (id)getCustomHeadView;
- (void).cxx_destruct;

@end
