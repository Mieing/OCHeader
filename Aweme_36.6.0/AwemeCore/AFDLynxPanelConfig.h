@class NSString, AWEAwemeModel;
@protocol AWEPlayInteractionViewControllerProtocol, AWEAwemeBizPlayVideoProtocol;

@interface AFDLynxPanelConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionVC;
@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol> videoPlayer;
@property (retain, nonatomic) NSString *openPanelTimeStamp;
@property (nonatomic) long long initialGlobalIndexForAlbumImage;

- (void).cxx_destruct;

@end
