@class WCFinderSearchFeedTabGroupSession, FinderSearchSecurityTips, WCFinderSearchFeedInfoSession;

@interface WCFinderSearchViewSection : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) FinderSearchSecurityTips *securityTips;
@property (retain, nonatomic) WCFinderSearchFeedInfoSession *infoSession;
@property (retain, nonatomic) WCFinderSearchFeedTabGroupSession *feedTabGroup;
@property (nonatomic) long long displayCountLimit;

+ (id)sectionWithSecurityTips:(id)a0;
+ (id)sectionWithSectionInfos:(id)a0;
+ (id)sectionWithFeedGroup:(id)a0;

- (id)init;
- (long long)rowNumberOfSection;
- (void).cxx_destruct;

@end
