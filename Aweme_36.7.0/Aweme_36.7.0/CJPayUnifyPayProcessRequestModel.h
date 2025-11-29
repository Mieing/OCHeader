@class NSDictionary;

@interface CJPayUnifyPayProcessRequestModel : NSObject

@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) NSDictionary *jhConfirmPtCodeParams;
@property (copy, nonatomic) NSDictionary *zgConfirmParams;
@property (copy, nonatomic) id /* block */ customLoadingBlock;

- (void).cxx_destruct;

@end
