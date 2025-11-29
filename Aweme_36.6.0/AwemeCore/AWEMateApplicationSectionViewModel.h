@class NSString, AWESocialRelationObserver;

@interface AWEMateApplicationSectionViewModel : AWEBaseListSectionViewModel <NSObject>

@property (retain, nonatomic) AWESocialRelationObserver *mateObserver;
@property (retain, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) id /* block */ didDeleteModelsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectItemModel:(id)a0;
- (void)updateMateState:(id)a0;
- (void)showPopOver:(id)a0 model:(id)a1;
- (void)deleteNoticeModel:(id)a0 isFromLongPress:(BOOL)a1;
- (void)trackFriendRequestCellShowWithModel:(id)a0;
- (void)trackAddFriendBtnWithModel:(id)a0;
- (void)postDeleteNetWork:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
