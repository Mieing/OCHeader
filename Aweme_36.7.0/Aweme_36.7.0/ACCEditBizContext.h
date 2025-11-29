@class AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCEditBizContext : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;

+ (id)contextWithPublishModel:(id)a0 serviceProvider:(id)a1;

- (void).cxx_destruct;

@end
