@class NSString;

@interface AWEIMSkylightWatchLiveDataBuilder : NSObject <AWEIMSkylightDataBizBuilderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildViewModelsWithContext:(id)a0 bizType:(unsigned long long)a1;

@end
