@class NSString, SearchOrRecommendItemNew, BSBusinessServiceInfo, BusinessDetailInfo, CContact;

@interface BSBusinessContactItem : NSObject

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) BusinessDetailInfo *detailInfo;
@property (retain, nonatomic) SearchOrRecommendItemNew *contactItem;
@property (retain, nonatomic) BSBusinessServiceInfo *serviceInfo;
@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) NSString *jumpUrl;

+ (id)fromServerObj:(id)a0;

- (void).cxx_destruct;

@end
