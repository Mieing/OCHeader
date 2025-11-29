@class NSString, NSData;

@interface FinderLbsTabTipsInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long tabTipsObjectId;
@property (retain, nonatomic) NSString *tabTipsObjectNonceId;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;
@property (retain, nonatomic) NSString *tabTipsPath;

+ (void)initialize;

@end
