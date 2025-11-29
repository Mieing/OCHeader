@class ACCCameraSubscription, NSString, ACCRecordContainerMode;

@interface ACCRecordSubmodeViewModel : ACCRecorderViewModel <ACCRecordSubmodeService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) ACCRecordContainerMode *containerMode;
@property (nonatomic) long long modeIndex;
@property (nonatomic) BOOL switchLengthViewHidden;
@property (nonatomic) BOOL sideslipPropTrayViewShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
