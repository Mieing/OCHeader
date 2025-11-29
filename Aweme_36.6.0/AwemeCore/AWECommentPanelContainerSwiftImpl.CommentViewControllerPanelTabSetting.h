@class NSArray;

@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPanelTabSetting : NSObject <AWECommentViewControllerTabSettingProtocol> {
    void /* function */ insertIDs;
    void /* function */ insertLikerIDs;
    void /* function */ insertViewerIDs;
    void /* function */ insertReqIDs;
    void /* function */ insertFavoriteIDs;
}

@property (nonatomic) unsigned long long currentTab;
@property (nonatomic) unsigned long long defaultLandingTab;
@property (nonatomic) unsigned long long intentTab;
@property (nonatomic, copy) NSArray *insertIDs;
@property (nonatomic, copy) NSArray *insertLikerIDs;
@property (nonatomic, copy) NSArray *insertViewerIDs;
@property (nonatomic, copy) NSArray *insertReqIDs;
@property (nonatomic, copy) NSArray *insertFavoriteIDs;
@property (nonatomic) long long liteRewardCollectAmount;

- (void).cxx_destruct;
- (id)init;

@end
