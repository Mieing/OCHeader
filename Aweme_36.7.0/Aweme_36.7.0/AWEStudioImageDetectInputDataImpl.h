@class NSString, NSArray;

@interface AWEStudioImageDetectInputDataImpl : NSObject <AWEStudioImageDetectInputData>

@property (retain, nonatomic) NSString *applicationName;
@property (retain, nonatomic) NSString *effectID;
@property (retain, nonatomic) NSArray *assetModels;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *imagePaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
