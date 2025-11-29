@class NSString, FinderJumpInfo, WCFinderRedDotCtrlInfo;

@interface BrandMyTabEntranceCardInfo : NSObject

@property (nonatomic) BOOL hasBiz;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *headImgUrl;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *fansText;
@property (copy, nonatomic) NSString *tips;
@property (nonatomic) unsigned int banType;
@property (copy, nonatomic) NSString *banUrl;
@property (readonly, nonatomic) NSString *banTips;
@property (nonatomic) unsigned int verifyFlag;
@property (nonatomic) BOOL showWriteArticle;
@property (nonatomic) BOOL showRegisterRedDot;
@property (copy, nonatomic) NSString *notifyText;
@property (retain, nonatomic) FinderJumpInfo *notifyJumpInfo;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *notifyCtrlInfo;

- (void).cxx_destruct;

@end
