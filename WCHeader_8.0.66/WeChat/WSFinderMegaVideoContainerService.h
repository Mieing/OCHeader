@class NSString, WCFinderRedDotCtrlInfo;

@interface WSFinderMegaVideoContainerService : MMUserService <MMServiceProtocol>

@property (copy, nonatomic) NSString *enterRedDotTipsUuid;
@property (nonatomic) unsigned long long pageEnterType;
@property (copy, nonatomic) NSString *sourceFeedId;
@property (nonatomic) BOOL isChangeTab;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *finderCtrlInfo;
@property (copy, nonatomic) NSString *lvCurrentContextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
