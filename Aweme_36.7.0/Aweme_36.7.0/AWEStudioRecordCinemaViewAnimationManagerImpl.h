@class NSString, AWEStudioCinemaAnimationStatusImpl;

@interface AWEStudioRecordCinemaViewAnimationManagerImpl : NSObject <AWEStudioRecordCinemaViewAnimationManager>

@property (retain, nonatomic) AWEStudioCinemaAnimationStatusImpl *normalStatus;
@property (retain, nonatomic) AWEStudioCinemaAnimationStatusImpl *cinemaStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
