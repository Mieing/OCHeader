@class NSArray, CLLocation, NSString;

@interface LbsLifeData : MMObject

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSArray *lbsLifeList;
@property (retain, nonatomic) NSArray *iconUrlList;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isStartFromFirst;
@property (retain, nonatomic) NSString *logoUrl;
@property (retain, nonatomic) NSString *searchID;

- (void).cxx_destruct;

@end
