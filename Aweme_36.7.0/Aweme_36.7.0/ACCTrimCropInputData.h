@class NSString;
@protocol ACCTrimCropBusinessTemplate, IESServiceProvider;

@interface ACCTrimCropInputData : NSObject <ACCTrimCropInputDataProtocol>

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (retain, nonatomic) id<ACCTrimCropBusinessTemplate> businessTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
