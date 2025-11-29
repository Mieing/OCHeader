@class NSString, MPPageFriendInfo, MPPagePayInfo;

@interface MPPageRelatedInfo : MMObject <PBCoding>

@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *fullUrl;
@property (retain, nonatomic) MPPageFriendInfo *friendInfo;
@property (retain, nonatomic) MPPagePayInfo *payInfo;
@property (nonatomic) unsigned int lastUpdatTimeStamp;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSString *wordingReportInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_fullUrl;
+ (void)PBArrayAdd_friendInfo;
+ (void)PBArrayAdd_payInfo;
+ (void)PBArrayAdd_lastUpdatTimeStamp;
+ (void)PBArrayAdd_pageIdentifier;
+ (void)PBArrayAdd_wordingReportInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
