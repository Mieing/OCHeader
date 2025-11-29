@class IESECMallPopupTaskConfig, NSString;
@protocol IESECMallPopupDelegate;

@interface IESECMallPopupTask : NSObject

@property (retain, nonatomic) IESECMallPopupTaskConfig *taskConfig;
@property (copy, nonatomic) NSString *uniqueId;
@property (weak, nonatomic) id<IESECMallPopupDelegate> delegate;

- (void).cxx_destruct;

@end
