@class NSNumber, NSDictionary, NSString;

@interface BDSimAudioDashObject : NSObject <BDSimAudioDashModel>

@property (retain, nonatomic) NSNumber *audioQuality;
@property (copy, nonatomic) NSDictionary *audioMetaInfo;
@property (copy, nonatomic) NSString *audioExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
