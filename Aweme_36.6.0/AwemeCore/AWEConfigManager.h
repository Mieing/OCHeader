@class NSString;

@interface AWEConfigManager : NSObject <AWEConcernConfigProtocol, AWEMainConfigProtocol, AWEUserProfileConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionUserDefaults;
+ (BOOL)enableAppleMusic;
+ (BOOL)enablePostNotificationSwitch;
+ (BOOL)enableHashtag;
+ (BOOL)enableTTPlayer:(id)a0;
+ (BOOL)enableOptimizeImageCacheInAwemeDetail;
+ (BOOL)useV2CommentList;
+ (BOOL)enableCommentAtAutoSearchWithReferString:(id)a0 awemeModel:(id)a1;


@end
