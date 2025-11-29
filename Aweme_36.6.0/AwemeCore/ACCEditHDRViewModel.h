@class NSString, AWEVideoPublishViewModel;

@interface ACCEditHDRViewModel : NSObject <ACCEditHDRProvideProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (readonly, nonatomic) BOOL videoHDROpened;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
