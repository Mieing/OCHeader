@class NSString, NSArray, HTSLiveImage, NSMutableArray;

@interface TabItem : IESLivePBBaseMessage

@property (nonatomic) unsigned long long order;
@property (nonatomic) BOOL isRecommend;
@property (retain, nonatomic) TabItem *recommendTab;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isDefaultTab;
@property (copy, nonatomic) NSString *drawerPage;
@property (nonatomic) BOOL isFromNearbyTV;
@property (retain, nonatomic) NSArray *enterSource;
@property (retain, nonatomic) NSArray *shieldEnterSource;
@property (copy, nonatomic) NSString *drawerEnterMethod;
@property (nonatomic) BOOL recommandNeedReplace;
@property (nonatomic) BOOL shouldLoadmoreForRecommend;
@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *umengEvent;
@property (nonatomic) long long umengSource;
@property (nonatomic) long long enableDislike;
@property (nonatomic) long long enableDrawStream;
@property (copy, nonatomic) NSString *interURL;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSMutableArray *avatarListArray;
@property (readonly, nonatomic) unsigned long long avatarListArray_Count;
@property (copy, nonatomic) NSString *event;
@property (nonatomic) long long source;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *reqFrom;
@property (copy, nonatomic) NSString *innerReqFrom;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) BOOL customLayout;
@property (copy, nonatomic) NSString *xiguaOldTabData;

+ (id)descriptor;

- (void)setCustomLayout:(BOOL)a0;
- (void)setType:(long long)a0;
- (void)setEvent:(id)a0;
- (void)setEnableDislike:(long long)a0;
- (void)setStyle:(long long)a0;
- (void)setName:(id)a0;
- (void)setId_p:(long long)a0;
- (id)innerURL;
- (BOOL)isValid;
- (id)url;
- (id)title;
- (id)track;

@end
