@class NSArray, NSError, NSString;
@protocol AWEStudioImageDetectInputData;

@interface AWEStudioImageDetectPackedResultImpl : NSObject <AWEStudioImageDetectPackedResult>

@property (retain, nonatomic) id<AWEStudioImageDetectInputData> inputData;
@property (nonatomic) unsigned long long currentStep;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (id)initWithError:(id)a0;

@end
