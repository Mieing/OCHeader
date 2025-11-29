@class NSString;

@interface AWEUGEvadeVideoContentServiceImpl : HTSService <AWEUGEvadeVideoContentService>

@property (copy, nonatomic) NSString *evadeReason;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterQuitFromLandscapeFeedNotification;
- (void)beforeEnterToLandscapeFeedNotification;
- (BOOL)checkIfInWhiteListWithAwemeModel:(id)a0 allowedTypeList:(id)a1;
- (id)getEvadeReason;
- (void).cxx_destruct;
- (id)init;

@end
