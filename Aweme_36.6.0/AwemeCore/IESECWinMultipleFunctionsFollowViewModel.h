@class IESECRelationMultipleFunctionsFollowView, NSString, IESECServiceProxy, IESECRelationFansClubBubbleConfigModel, UIColor, IESECWinContext;
@protocol IESECWinPageCardService, IESECWinFeedService, IESECWinAuthorService;

@interface IESECWinMultipleFunctionsFollowViewModel : NSObject <IESECRelationMultipleFunctionsFollowViewDelegate> {
    IESECWinContext *_context;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinAuthorService> *authorService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinPageCardService> *pageCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;
@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (nonatomic) long long showArea;
@property (readonly, nonatomic) BOOL followStatus;
@property (readonly, nonatomic) IESECRelationFansClubBubbleConfigModel *fansClubBubbleConfig;
@property (readonly, nonatomic) unsigned long long followViewMode;
@property (weak, nonatomic) IESECRelationMultipleFunctionsFollowView *followView;
@property (retain, nonatomic) UIColor *fansClubColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (void)follow;
- (void)followAction;
- (void)trackShow;
- (void)trackClick;
- (long long)fansClubLevel;
- (void)unfollow;
- (void)jumpToJoinFansClubBoard;
- (void)jumpToFansClubMissionBoard;
- (id)followViewBackgroundColor:(id)a0;
- (id)followViewTextColor:(id)a0;
- (void)fansClubButtonShowed;
- (BOOL)joinStatus;
- (void)subscribeEvent;
- (BOOL)openFansClub;
- (id)fansClubUrl;
- (void)updateWithAuthorObject:(id)a0;
- (id)initWithContext:(id)a0 showArea:(long long)a1;
- (void)trackFloatShow;
- (id)p_areaStringForPageCardFollowStateEvent;
- (void)trackFansClubEntranceClick;
- (void)trackFansClubButtonClick;
- (id)createFansClubUrl;
- (void)trackFansClubButtonShow;
- (void)updateWithNavObject:(id)a0;
- (void).cxx_destruct;

@end
