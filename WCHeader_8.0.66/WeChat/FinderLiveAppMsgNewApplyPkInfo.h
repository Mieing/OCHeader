@class NSString, NewAnchorPkInfo, NSData, NSMutableArray, FinderObject;

@interface FinderLiveAppMsgNewApplyPkInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NewAnchorPkInfo *applyAnchor;
@property (retain, nonatomic) NewAnchorPkInfo *acceptorAnchor;
@property (retain, nonatomic) NSMutableArray *pkroomAnchors;
@property (retain, nonatomic) NSString *applyId;
@property (retain, nonatomic) NSData *randomPkBuffer;
@property (nonatomic) unsigned long long confirmExpiredTime;
@property (retain, nonatomic) FinderObject *applyFinderObject;

+ (void)initialize;

@end
