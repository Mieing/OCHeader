@class NSString, NSNumber, NSMutableDictionary;

@interface AWEAdOrderCenterPopViewControlModel : MTLModel

@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSNumber *downloadNumber;
@property (nonatomic) double resetTime;
@property (retain, nonatomic) NSMutableDictionary *confirm;

- (void).cxx_destruct;

@end
