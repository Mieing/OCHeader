@class ACCRecordViewControllerInputData, NSString;

@interface ACCVideoReshootRecorderTemplate : NSObject <ACCBusinessTemplate>

@property (weak, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEVideoRecordReshootTemplateLiteAdapterClass;

@end
