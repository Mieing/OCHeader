@class NSString, FinderLiveAnchorCustomGiftInfo_CustomItem;

@interface WCFinderLiveAnchorOpFansGroupCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long opType;
@property (retain, nonatomic) NSString *fansGroupName;
@property (retain, nonatomic) FinderLiveAnchorCustomGiftInfo_CustomItem *giftCustomizationItem;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initCreateFansGroupWithGroupName:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (id)initModifyFansGroupNameWithGroupName:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (id)initCustomizeFansGroupGiftWithCustomizableGiftId:(id)a0 selectedProductId:(id)a1 textAttachment:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initModifyFansGroupNoticeWithNotice:(id)a0 imageUrl:(id)a1 levelRequired:(unsigned long long)a2 visibility:(unsigned int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (id)initEnableAnochrCard:(BOOL)a0 visibility:(unsigned int)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)commonInit;
- (void)createModContactRequestEnable:(BOOL)a0 visibility:(unsigned int)a1;
- (void)createBulletinRequestWithNotice:(id)a0 imageUrl:(id)a1 levelRequired:(unsigned long long)a2 visibility:(unsigned int)a3;
- (void)createGroupCreationOrNameModificationRequest;
- (void)createCustomizableGiftModificationRequest;
- (id)newRequest;
- (int)wireFormatOpCodeWithCgiOpType:(unsigned long long)a0;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
