@class NSString, AWEAdOrderCenterPopTipsControlModel, AWEAdOrderCenterPopViewControlModel;

@interface AWEAdOrderCenterPopWindowControlModel : NSObject

@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) AWEAdOrderCenterPopTipsControlModel *popTipsInfo;
@property (retain, nonatomic) AWEAdOrderCenterPopViewControlModel *popViewInfo;

- (void).cxx_destruct;

@end
