@class NSString, UIImage, AWEShareLiveImageModel, AWELiveRoomModel;
@protocol AWEShareLiveRoomModelProtocol, AWEShareLiveContentModelProtocol;

@interface AWEShareLiveModel : NSObject

@property (retain, nonatomic) id<AWEShareLiveRoomModelProtocol> room;
@property (retain, nonatomic) id<AWEShareLiveContentModelProtocol> content;
@property (retain, nonatomic) AWELiveRoomModel *mappedRoom;
@property (nonatomic) unsigned long long posterType;
@property (retain, nonatomic) UIImage *tokenAlertTopImage;
@property (retain, nonatomic) AWEShareLiveImageModel *shareImageModel;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL isLiveChaine;
@property (copy, nonatomic) NSString *shareType;

- (id)extraParams;
- (id)shareScene;
- (id)configID;
- (id)statsDic;
- (id /* block */)landscapeImageShareCallback;
- (BOOL)isPreLive;
- (BOOL)isHiddenReposter;
- (id)ugShareInfo;
- (id)tokenAlertTopImageURLs;
- (id /* block */)channelShareCallback;
- (id)backgroundImageUrl;
- (void).cxx_destruct;
- (BOOL)isLandscape;
- (id)activityInfo;

@end
