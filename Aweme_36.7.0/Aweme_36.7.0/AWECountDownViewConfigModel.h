@class NSString;

@interface AWECountDownViewConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSString *anchorStartText;
@property (copy, nonatomic) NSString *anchorEndText;
@property (copy, nonatomic) NSString *startLableColorString;
@property (copy, nonatomic) NSString *completeLableColorString;
@property (copy, nonatomic) NSString *anchorBackgroundURLString;
@property (copy, nonatomic) NSString *completeSchema;
@property (copy, nonatomic) NSString *failureToast;
@property (copy, nonatomic) NSString *completeImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
