@class NSString, AppMsgShareItem;

@interface MMWebViewMinimizationData : MMObject <PBCoding>

@property (copy, nonatomic) NSString *webViewUrl;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *publisherUserName;
@property (copy, nonatomic) NSString *publisherNickName;
@property (nonatomic) unsigned int getA8KeyScene;
@property (retain, nonatomic) NSString *strWebExtInfo;
@property (copy, nonatomic) NSString *webViewFullUrl;
@property (retain, nonatomic) AppMsgShareItem *webShareItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_webViewUrl;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_publisherUserName;
+ (void)PBArrayAdd_publisherNickName;
+ (void)PBArrayAdd_getA8KeyScene;
+ (void)PBArrayAdd_strWebExtInfo;
+ (void)PBArrayAdd_webViewFullUrl;
+ (void)PBArrayAdd_webShareItem;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
