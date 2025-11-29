@class AWENewsAISmartSubmitHelper, NSString, AWENewsAISmartBackgroundViewModel, AWENewsAISmartFeedPageContext;

@interface AWENewsAISmartTrackDetailViewModel : NSObject

@property (retain, nonatomic) AWENewsAISmartSubmitHelper *submitHelper;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) AWENewsAISmartFeedPageContext *context;
@property (nonatomic) double revealRange;
@property (retain, nonatomic) AWENewsAISmartBackgroundViewModel *backgroundViewModel;
@property (copy, nonatomic) NSString *trackName;
@property (copy, nonatomic) NSString *trackID;
@property (copy, nonatomic) NSString *trackImage;
@property (copy, nonatomic) NSString *followInfo;
@property (copy, nonatomic) NSString *followNum;
@property (copy, nonatomic) NSString *trackDesc;
@property (nonatomic) BOOL isFollow;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) double detailHeaderHeight;
@property (nonatomic) double navViewTitleHeight;
@property (nonatomic) double titleViewHeight;
@property (nonatomic) double tableViewContentInset;
@property (nonatomic) struct CGSize { double width; double height; } trackButtonSize;
@property (nonatomic) BOOL buttonPinned;
@property (nonatomic) BOOL hasSetButtonOffset;
@property (nonatomic) double buttonOffsetY;

- (id)p_createPanelParamsDict;
- (id)initWithPageContext:(id)a0;
- (void)p_configWithPageContext:(id)a0;
- (void)submitFollowWithOperation:(long long)a0 completion:(id /* block */)a1;
- (void)p_configData;
- (void)p_configHeight;
- (void)p_submitWithOperation:(long long)a0 completion:(id /* block */)a1;
- (void)p_trackFollowStateWithOperation:(long long)a0;
- (void).cxx_destruct;

@end
