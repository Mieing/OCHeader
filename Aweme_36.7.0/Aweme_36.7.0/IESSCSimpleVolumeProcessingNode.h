@class NSString;

@interface IESSCSimpleVolumeProcessingNode : NSObject <IESSCAudioProcessingNode>

@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
