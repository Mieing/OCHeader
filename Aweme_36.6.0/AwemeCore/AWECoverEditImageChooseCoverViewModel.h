@class NSString, AWEBinding;

@interface AWECoverEditImageChooseCoverViewModel : NSObject <AWECoverEditImageChooseCoverService>

@property (copy, nonatomic) NSString *currentProjectUUID;
@property (retain, nonatomic) AWEBinding *changeCoverSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
