@class NSDictionary, NSString;

@interface IESECCollectRequest : NSObject

@property (copy, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL isProfileExploreStyle;

- (void).cxx_destruct;

@end
