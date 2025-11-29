@class NSArray, NSString;

@interface IESLiveOpenPlatfromMorePanelItemManager : NSObject <BDLOCNativeAppMorePanelDelegate>

@property (copy, nonatomic) NSArray *whiteList;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
