@class NSString;

@interface IESECLivePlaybackRoomMessage : NSObject <IESECLiveRoom>

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *anchorSecUserID;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL withCommercePermission;
@property (nonatomic) BOOL withFusionShopEntry;
@property (retain, nonatomic) id liveDIContext;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) long long scene;
@property (nonatomic, getter=isOrientationLandscape) BOOL orientationLandscape;

- (void).cxx_destruct;

@end
