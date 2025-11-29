@class NSString, NLEInterface_OC, NSDictionary, AWEVideoPublishViewModel;

@interface AWEStudioAIEnhanceSecondaryPageInput : NSObject

@property (copy, nonatomic) NSString *creationID;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NLEInterface_OC *nleInterface;
@property (copy, nonatomic) NSString *placeholderImagePath;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) long long initIntensity;
@property (nonatomic) long long defaultPointIntensity;
@property (retain, nonatomic) NSDictionary *coreBasicParams;

- (void).cxx_destruct;

@end
