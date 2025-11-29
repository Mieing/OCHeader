@protocol WCFinderJoinGroupBuyEduActionSheetDelegate;

@interface WCFinderJoinGroupBuyEduActionSheet : WCFinderCommonEduTipsActionSheet

@property (weak, nonatomic) id<WCFinderJoinGroupBuyEduActionSheetDelegate> reportDelegate;

- (id)getEduTipsActionSheetConfig;
- (void)bindAcceptButton:(id)a0;
- (void)bindContainerView:(id)a0;
- (void).cxx_destruct;

@end
