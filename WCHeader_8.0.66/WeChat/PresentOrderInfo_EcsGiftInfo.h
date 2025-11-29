@class PresentOrderInfo_EcsGiftInfo_EcGiftSkuInfo, EcsJumpInfo, PresentOrderInfo_EcsGiftInfo_GiftList, NSString, PresentOrderInfo_EcsGiftInfo_GroupGiftInfo, PresentOrderInfo_EcsGiftInfo_GiftCoverInfo, PresentOrderInfo_EcsGiftInfo_StatusActionInfo;

@interface PresentOrderInfo_EcsGiftInfo : WXPBGeneratedMessage

@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo_GiftList *gifts;
@property (retain, nonatomic) EcsJumpInfo *jumpinfo;
@property (retain, nonatomic) NSString *wishmessage;
@property (retain, nonatomic) EcsJumpInfo *orderdetailjumpinfo;
@property (retain, nonatomic) EcsJumpInfo *complaintjumpinfo;
@property (nonatomic) unsigned int isgiver;
@property (retain, nonatomic) NSString *bottomWord;
@property (nonatomic) unsigned int expiredTime;
@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo_GroupGiftInfo *groupGiftInfo;
@property (nonatomic) unsigned int sendType;
@property (retain, nonatomic) NSString *addrHeadWording;
@property (retain, nonatomic) NSString *recvWording;
@property (retain, nonatomic) NSString *addrBottomWording;
@property (retain, nonatomic) NSString *addrTipsHead;
@property (retain, nonatomic) NSString *addrTipsContent;
@property (retain, nonatomic) NSString *giftSourceWording;
@property (nonatomic) unsigned int giftSource;
@property (retain, nonatomic) NSString *giftCntText;
@property (nonatomic) unsigned long long takemethod;
@property (retain, nonatomic) NSString *floatLayerPageTitle;
@property (retain, nonatomic) NSString *presentPageTitle;
@property (nonatomic) unsigned int titleImgStyle;
@property (nonatomic) unsigned int forceJumpDetail;
@property (nonatomic) unsigned int disableReceive;
@property (retain, nonatomic) NSString *giftsourcename;
@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo_GiftCoverInfo *giftcover;
@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo_StatusActionInfo *presentSourceAction;
@property (nonatomic) unsigned int userType;
@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo_EcGiftSkuInfo *skuinfos;
@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo_StatusActionInfo *productPackageAction;
@property (nonatomic) unsigned int fromProductSet;
@property (nonatomic) unsigned int presentStyleType;
@property (retain, nonatomic) NSString *participantswording;
@property (retain, nonatomic) NSString *drawtimewording;
@property (nonatomic) unsigned int lotterymethod;
@property (retain, nonatomic) NSString *presentPageTitleRichText;
@property (nonatomic) unsigned int forcejumpreceivefloatpage;

+ (void)initialize;

@end
