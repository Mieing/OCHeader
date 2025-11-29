@class NSString, NSMutableArray, NSData;

@interface FinderTipsShowEntranceExtInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int displayTabType;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSMutableArray *multiUsernames;
@property (retain, nonatomic) NSString *reportExtInfo;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;
@property (nonatomic) unsigned int liveSubRecallType;
@property (nonatomic) unsigned int finderSubRecallType;
@property (nonatomic) unsigned int objectType;
@property (nonatomic) unsigned int friendLikeCount;
@property (nonatomic) BOOL isSocialHotSpot;
@property (nonatomic) unsigned long long localObjectId;

+ (void)initialize;

@end
