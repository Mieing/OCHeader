@class NSString, NSMutableArray, NSMutableDictionary;

@interface TSPKStatisticModel : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long count;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSMutableArray *timeDifferenceArray;
@property (retain, nonatomic) NSMutableDictionary *hostStates;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long timeCountDown;
@property (retain, nonatomic) NSMutableArray *bpeaCertToken;

- (void).cxx_destruct;

@end
