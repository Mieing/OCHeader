@class NSString, IESECServiceProxy, IESECRelationFansClubModel, IESECWinContext;
@protocol IESECWinDataService, IESECWinTabService;

@interface IESECWinAuthorService : NSObject <IESECWinAuthorService>

@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarFrameInParent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } followFrameInParent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowTitleFrameInParent;
@property (nonatomic) BOOL hasSetAuthorService;
@property (nonatomic) BOOL isFollow;
@property (nonatomic) double authorCardHeight;
@property (retain, nonatomic) IESECRelationFansClubModel *fansClubInfo;
@property (nonatomic) BOOL hasFansClubRedPackGuideBubble;
@property (nonatomic) BOOL showingFollowGuideBubble;
@property (nonatomic) BOOL showingFansClubGuideBubble;
@property (nonatomic) BOOL isFansClubRedPacketOpened;
@property (nonatomic) BOOL isFansClubGuideBubbleFirstShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)jumpToDetailPageWithImpressionWord:(id)a0;
- (void)setFrameWithSizeIfNeeded:(struct CGSize { double x0; double x1; })a0 offset:(double)a1 followRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 avatarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 windowTitleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)reloadTabDataWithFollowStatus;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
