@class IESECListKitCardPreloaderModel;

@interface IESECMallNaiveCardPreloaderTask : NSObject <IESECListKitCardPreloaderTask>

@property unsigned long long state;
@property (retain, nonatomic) IESECListKitCardPreloaderModel *model;

- (void)startWithCompleteBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
