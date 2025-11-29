@class CJPayBaseResponse;

@interface CJPayDyPayPreRequestModel : NSObject

@property (copy, nonatomic) id /* block */ preRequestCompletionBlock;
@property (nonatomic) BOOL dypayProcessCanStart;
@property (nonatomic) BOOL isPreRequestOver;
@property (retain, nonatomic) CJPayBaseResponse *bizResponse;

- (void).cxx_destruct;

@end
