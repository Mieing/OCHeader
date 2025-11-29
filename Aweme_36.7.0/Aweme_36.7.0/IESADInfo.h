@class NSString;

@interface IESADInfo : NSObject

@property (retain, nonatomic) NSString *aid;
@property (nonatomic) double playTime;
@property (nonatomic) double stayCount;
@property (nonatomic) double skipCount;
@property (nonatomic) double clickCount;

- (void).cxx_destruct;

@end
