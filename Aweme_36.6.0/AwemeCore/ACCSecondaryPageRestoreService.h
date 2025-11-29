@class NSString, AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol, IESServiceProvider;

@interface ACCSecondaryPageRestoreService : NSObject <ACCSecondaryPageRestoreService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) BOOL enableUserInteraction;
@property (nonatomic) BOOL enableScrollViewUserInteraction;
@property (nonatomic) BOOL showPlayControlView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
