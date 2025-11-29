@class NSNumber, NSString;

@interface AWEEventNodeParamsModel : AWEBaseApiModel

@property (nonatomic) long long mainHotSpotID;
@property (retain, nonatomic) NSNumber *count;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSString *relateSpotID;
@property (copy, nonatomic) NSString *parantWord;
@property (copy, nonatomic) NSString *relateNodeWord;

- (void).cxx_destruct;

@end
