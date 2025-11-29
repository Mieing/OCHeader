@class NSString, AWEVideoPublishViewModel;

@interface ACCAutoCaptionViewModel : NSObject <ACCAutoCaptionServiceProtocol>

@property (nonatomic) long long autoCaptionTriggleType;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (nonatomic) BOOL isCaptionAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowAutoCaptionEntrance:(id)a0;

@end
