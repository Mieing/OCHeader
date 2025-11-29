@class BDSCClarityViewUIModel, BDSCControlViewUIModel, NSDictionary, BDSCSearchListUIModel, NSString, BDByteScreenCastLabel;

@interface BDSCUIDefaultConfigDouyinLiveLight : NSObject <BDSCUIDefaultConfigProtocol>

@property (retain, nonatomic) BDByteScreenCastLabel *screenCastLabel;
@property (retain, nonatomic) BDSCSearchListUIModel *searchList;
@property (retain, nonatomic) BDSCClarityViewUIModel *clarityView;
@property (retain, nonatomic) BDSCControlViewUIModel *controlViewUIModel;
@property (copy, nonatomic) NSDictionary *resultBanner;
@property (nonatomic) BOOL buttonSelectedInBold;
@property (copy, nonatomic) NSDictionary *colorPalette;
@property (copy, nonatomic) NSDictionary *deviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
