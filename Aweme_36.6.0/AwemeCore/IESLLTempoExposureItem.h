@class NSString, NSDictionary, UIView;

@interface IESLLTempoExposureItem : NSObject

@property (copy, nonatomic) NSString *callbackMethodName;
@property float exposureThreshold;
@property (retain) UIView *exposureView;
@property (retain, nonatomic) NSDictionary *envData;
@property (copy, nonatomic) NSString *componentID;
@property (nonatomic) BOOL isDisexposureItem;

- (void).cxx_destruct;

@end
