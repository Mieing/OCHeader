@class NSString, BDSCDeviceListTagConfigModel;
@protocol BDSCDeviceProtocol;

@interface BDSCDeviceListModel : NSObject

@property (retain, nonatomic) id<BDSCDeviceProtocol> device;
@property (nonatomic) double cellHeight;
@property (copy, nonatomic) NSString *cellIdentifier;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) BDSCDeviceListTagConfigModel *tagConfigModel;

- (void).cxx_destruct;

@end
