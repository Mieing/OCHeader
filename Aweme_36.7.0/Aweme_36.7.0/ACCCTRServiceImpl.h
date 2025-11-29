@class ACCThreadSafeMutableDictionary, ACCThreadSafeArray, NSString;

@interface ACCCTRServiceImpl : NSObject <BDVViewEventProtocol, ACCCTRServiceProtocol>

@property (retain, nonatomic) ACCThreadSafeMutableDictionary *eventMap;
@property (retain, nonatomic) ACCThreadSafeArray *viewConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerEventForScene:(id)a0 delegate:(id)a1;
- (void)addView:(id)a0 scene:(id)a1 event:(unsigned long long)a2;
- (void)addView:(id)a0 delegate:(id)a1;
- (void)addCollectionView:(id)a0 delegate:(id)a1;
- (void)bindScrollView:(id)a0 scene:(id)a1;
- (void)bindScrollview:(id)a0 view:(id)a1;
- (void)bindCoverView:(id)a0 scene:(id)a1;
- (void)bindCoverView:(id)a0 view:(id)a1;
- (void)checkVisibleWithView:(id)a0;
- (void)checkVisibleWithScene:(id)a0;
- (void)trackShowWithView:(id)a0 scene:(id)a1;
- (void)trackClickWithView:(id)a0 scene:(id)a1;
- (void)bdv_viewDidVisible:(id)a0 metaData:(id)a1;
- (void)bdv_viewDidEndVisible:(id)a0;
- (void).cxx_destruct;

@end
