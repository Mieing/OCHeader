@class NSString;
@protocol IESECSmartServiceInputData;

@interface IESECSmartServiceRunConfig : NSObject <IESECSmartServiceRunConfig>

@property (nonatomic) BOOL async;
@property (retain, nonatomic) id<IESECSmartServiceInputData> inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
