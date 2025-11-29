@class NSString, ParametersModel;

@interface EventModel : NSObject

@property (copy, nonatomic) NSString *Type;
@property (nonatomic) long long RelativeTime;
@property (nonatomic) long long Index;
@property (copy, nonatomic) NSString *Path;
@property (nonatomic) long long Duration;
@property (retain, nonatomic) ParametersModel *Parameters;

- (void).cxx_destruct;

@end
