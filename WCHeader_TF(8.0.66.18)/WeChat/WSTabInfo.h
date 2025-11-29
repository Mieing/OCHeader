@class NSDictionary, NSString, WSReddot;

@interface WSTabInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *originalDictionary;
@property (nonatomic) unsigned long long searchScene;
@property (nonatomic) unsigned long long searchType;
@property (copy, nonatomic) NSString *reddotPath;
@property (nonatomic) int finderCommentScene;
@property (copy, nonatomic) NSString *liteAppId;
@property (copy, nonatomic) NSString *liteAppPage;
@property (copy, nonatomic) NSString *liteAppExpKey;
@property (nonatomic) long long category;
@property (nonatomic) unsigned long long bizType;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int finderTabType;
@property (copy, nonatomic) NSString *extTabInfo;
@property (retain, nonatomic) WSReddot *entranceRedDotInfo;

- (id)currentUniformEntranceReddot;
- (id)initWithParams:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)useLiteApp;
- (id)titleFromK1KConfig:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
