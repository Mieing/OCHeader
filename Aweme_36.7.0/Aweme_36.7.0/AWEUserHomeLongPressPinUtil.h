@class NSString;

@interface AWEUserHomeLongPressPinUtil : NSObject <AWEUserHomeLongPressPinUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestPinAweme:(id)a0 context:(id)a1 extraParam:(id)a2;
+ (void)recordClickPinFromSharePanel;
+ (void)trackPostTopSuccess:(BOOL)a0 error:(id)a1 extraParam:(id)a2;
+ (void)trackGuideShow;
+ (BOOL)canShowPinGuideWithContext:(id)a0;
+ (void)showGuideInCollectionView:(id)a0 dataSource:(id)a1 atSectionIndex:(long long)a2;
+ (void)notifyAwemePinStatusChange:(id)a0 refreshPostWork:(BOOL)a1;
+ (void)showErrorToast:(id)a0 wasTop:(BOOL)a1;
+ (void)updateAweme:(id)a0 toPin:(BOOL)a1 completion:(id /* block */)a2;
+ (void)recordShowLongPressPinGuide;
+ (void)replacePinedAweme:(id)a0 withAweme:(id)a1 completion:(id /* block */)a2;


@end
