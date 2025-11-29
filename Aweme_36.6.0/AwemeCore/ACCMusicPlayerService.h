@class NSString, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCMusicPlayerService : NSObject <ACCMusicPlayerServiceProtocol>

@property (nonatomic) long long playerType;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
