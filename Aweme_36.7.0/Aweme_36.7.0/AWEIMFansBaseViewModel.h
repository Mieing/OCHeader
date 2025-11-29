@class AWEIMFansContainerViewModel;
@protocol AWEIMFansMessage;

@interface AWEIMFansBaseViewModel : NSObject

@property (weak, nonatomic) id<AWEIMFansMessage> delegate;
@property (weak, nonatomic) AWEIMFansContainerViewModel *container;

- (void).cxx_destruct;

@end
