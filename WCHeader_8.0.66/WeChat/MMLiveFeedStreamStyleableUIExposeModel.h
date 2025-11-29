@class FinderWindowProductInfo, NSString;

@interface MMLiveFeedStreamStyleableUIExposeModel : MMLiveFeedStreamStyleableUIActionBaseModel

@property (retain, nonatomic) FinderWindowProductInfo *productInfo;
@property (nonatomic) unsigned long long tagType;
@property (nonatomic) unsigned long long unreadCount;
@property (retain, nonatomic) NSString *lotteryId;
@property (retain, nonatomic) NSString *guideBarTxt;
@property (nonatomic) unsigned long long guideBarType;
@property (nonatomic) unsigned long long exposeTs;
@property (nonatomic) BOOL reportKvExposeOnStart;

- (void).cxx_destruct;

@end
