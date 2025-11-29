@class NSDictionary, NSString;

@interface CJPayFaceRecogVCConfig : NSObject

@property (retain, nonatomic) NSDictionary *parameter;
@property (copy, nonatomic) NSString *effectID;
@property (nonatomic) long long facePageType;
@property (copy, nonatomic) id /* block */ loadingBlock;
@property (copy, nonatomic) id /* block */ resultCompletion;
@property (copy, nonatomic) id /* block */ createVCCompletion;
@property (copy, nonatomic) id /* block */ faceDetectedBlock;

- (void).cxx_destruct;

@end
