@class HTSLiveShareTicket, HTSLiveProductComments, HTSLiveProductPriceStruct, HTSLivePrivilegeTicket, HTSLiveCombined, HTSLiveProductBasicInfo, HTSLiveContentInfo, HTSLiveProductPriceRichText, HTSLiveItemInfo, HTSLivePaymentArea, HTSLiveUser, NSMutableArray, HTSLiveFilterReason, HTSLiveLiveInfo, HTSLiveProductBanner, HTSLiveComments, HTSLiveRating, HTSLiveSubscribeMember;

@interface HTSLiveProduct : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveProductBasicInfo *basicInfo;
@property (nonatomic) BOOL hasBasicInfo;
@property (retain, nonatomic) HTSLiveProductPriceStruct *priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (retain, nonatomic) HTSLiveLiveInfo *liveInfo;
@property (nonatomic) BOOL hasLiveInfo;
@property (retain, nonatomic) HTSLiveItemInfo *itemInfo;
@property (nonatomic) BOOL hasItemInfo;
@property (retain, nonatomic) HTSLiveContentInfo *contentInfo;
@property (nonatomic) BOOL hasContentInfo;
@property (retain, nonatomic) HTSLivePaymentArea *paymentArrea;
@property (nonatomic) BOOL hasPaymentArrea;
@property (retain, nonatomic) HTSLiveProductPriceRichText *priceRichInfo;
@property (nonatomic) BOOL hasPriceRichInfo;
@property (retain, nonatomic) HTSLiveProductComments *productComments;
@property (nonatomic) BOOL hasProductComments;
@property (retain, nonatomic) HTSLiveShareTicket *shareTicket;
@property (nonatomic) BOOL hasShareTicket;
@property (retain, nonatomic) HTSLivePrivilegeTicket *privilege;
@property (nonatomic) BOOL hasPrivilege;
@property (retain, nonatomic) HTSLiveCombined *combined;
@property (nonatomic) BOOL hasCombined;
@property (retain, nonatomic) HTSLiveComments *comments;
@property (nonatomic) BOOL hasComments;
@property (retain, nonatomic) HTSLiveRating *rating;
@property (nonatomic) BOOL hasRating;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) NSMutableArray *authorsArray;
@property (readonly, nonatomic) unsigned long long authorsArray_Count;
@property (retain, nonatomic) HTSLiveProductBanner *banner;
@property (nonatomic) BOOL hasBanner;
@property (retain, nonatomic) NSMutableArray *skuListArray;
@property (readonly, nonatomic) unsigned long long skuListArray_Count;
@property (retain, nonatomic) HTSLiveSubscribeMember *subscribeMember;
@property (nonatomic) BOOL hasSubscribeMember;
@property (retain, nonatomic) HTSLiveFilterReason *filterNode;
@property (nonatomic) BOOL hasFilterNode;

+ (id)descriptor;

@end
