@class MMFinderLiveConnectMicUser, NSArray, MMFinderLiveConnectMicPKInfo;

@interface MMFinderLiveConnectMicUsersInfo : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedAnchorFrame;
@property (nonatomic) unsigned long long anchorZOrder;
@property (nonatomic) unsigned long long anchorFocusState;
@property (nonatomic) BOOL hasFocusedUser;
@property (nonatomic) unsigned long long anchorUIType;
@property (nonatomic) unsigned long long anchorHeatValue;
@property (nonatomic) BOOL isGlobalSmallMode;
@property (nonatomic) double aspectRatio;
@property (nonatomic) unsigned long long micLayoutMode;
@property (nonatomic) unsigned long long anchorMicIndex;
@property (nonatomic) BOOL isFitRenderMode;
@property (nonatomic) unsigned long long cloudMixBackgroundType;
@property (retain, nonatomic) MMFinderLiveConnectMicPKInfo *anchorPkInfo;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *fakeAnchorMicUser;
@property (retain, nonatomic) NSArray *micAudienceUsersList;
@property (retain, nonatomic) NSArray *otherRoomMicAnchorUsersList;
@property (retain, nonatomic) NSArray *otherRoomMicAudienceUsersList;
@property (retain, nonatomic) NSArray *allMicUsersList;
@property (retain, nonatomic) NSArray *holeList;
@property (retain, nonatomic) NSArray *unoccupiedSeatList;
@property (readonly, nonatomic) BOOL isInConnectedMicUI;
@property (readonly, nonatomic) unsigned long long connectMicSeiMode;
@property (readonly, nonatomic) unsigned long long audioRoomConnectMicSeiMode;
@property (readonly, nonatomic) BOOL useDesignatedAspectRatio;
@property (readonly, nonatomic) BOOL emptyUserListAllowed;
@property (readonly, nonatomic) BOOL enableMasking;
@property (readonly, nonatomic) BOOL inAudiencePkLayoutMode;
@property (readonly, nonatomic) BOOL inCrossRoomPkLayoutMode;
@property (readonly, nonatomic) BOOL isSeiReadyForPk;
@property (readonly, nonatomic) BOOL showSeatName;
@property (readonly, nonatomic) BOOL isFullScreenDisplayMode;
@property (readonly, nonatomic) BOOL isAudienceMicFullScreenDisplayMode;
@property (readonly, nonatomic) BOOL isAnchorMicFullScreenDisplayMode;
@property (readonly, nonatomic) BOOL isAnchorPkChangeLayoutEnabled;

+ (BOOL)emptyUserListAllowedForLayoutMode:(unsigned long long)a0;

- (void)generateFakeAnchorMicUserWithSdkUserId:(id)a0 andContact:(id)a1;
- (void).cxx_destruct;

@end
