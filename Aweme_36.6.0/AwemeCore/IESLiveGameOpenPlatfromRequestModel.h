@class NSString, NSDictionary;

@interface IESLiveGameOpenPlatfromRequestModel : NSOperation

@property (copy, nonatomic) NSString *methodType;
@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *data;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithJSBResultDic:(id)a0;
- (void).cxx_destruct;

@end
