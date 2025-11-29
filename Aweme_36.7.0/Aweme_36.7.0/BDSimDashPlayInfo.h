@class NSString, NSArray;

@interface BDSimDashPlayInfo : NSObject

@property (nonatomic) int apiVersion;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *pToken;
@property (copy, nonatomic) NSString *playAuth;
@property (copy, nonatomic) NSArray *hosts;

- (void).cxx_destruct;

@end
