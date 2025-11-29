@class NSDictionary, NSString;

@interface IESLLGDPreRequestTaskModel : NSObject

@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *cacheFrom;
@property (copy, nonatomic) NSString *cacheFromSubScene;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
