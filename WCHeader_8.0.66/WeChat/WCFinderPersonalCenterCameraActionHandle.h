@class NSString, WCFinderPostMgrParamsModel, WCFinderPostMgr;

@interface WCFinderPersonalCenterCameraActionHandle : NSObject <WCFinderPostMgrDelegate, WCFinderPersonalCenterCameraActionHandle>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) WCFinderPostMgrParamsModel *postParams;
@property (retain, nonatomic) WCFinderPostMgr *postMgr;
@property (retain, nonatomic) NSString *refObjectId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
