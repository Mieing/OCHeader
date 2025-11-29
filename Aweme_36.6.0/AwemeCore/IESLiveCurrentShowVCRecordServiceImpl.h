@class NSString, UIViewController;

@interface IESLiveCurrentShowVCRecordServiceImpl : NSObject <IESLiveCurrentShowVCRecordService>

@property (weak, nonatomic) UIViewController *innerCurrentShowVC;
@property (copy, nonatomic) NSString *innerCurrentShowVCName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
