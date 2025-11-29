@class NSArray;

@interface BDByteCastSkipInfoBean : NSObject

@property (nonatomic) long long skip;
@property (copy, nonatomic) NSArray *skipHead;
@property (copy, nonatomic) NSArray *skipTail;

- (void).cxx_destruct;

@end
