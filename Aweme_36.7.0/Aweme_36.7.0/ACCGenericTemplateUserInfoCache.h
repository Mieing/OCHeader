@class NSString, AWEMediaUserInfoModel;

@interface ACCGenericTemplateUserInfoCache : NSObject <ACCGenericTemplateUserInfoCacheProtocol>

@property (retain, nonatomic) AWEMediaUserInfoModel *cachedOtherUserInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
