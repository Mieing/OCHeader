@class NSString;

@interface IESIMShootSameContext : NSObject

@property (nonatomic) BOOL useMainCamera;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *ugcId;
@property (copy, nonatomic) id /* block */ successCompletion;
@property (copy, nonatomic) NSString *mediaPathForCoPlay;
@property (nonatomic) BOOL isFollow;
@property (nonatomic) long long type;

- (void).cxx_destruct;

@end
