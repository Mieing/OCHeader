@class NSString;

@interface AWENearbyLocationChangeTrackModel : NSObject

@property (nonatomic) long long result;
@property (nonatomic) BOOL hasRequest;
@property (nonatomic) BOOL requestResult;
@property (retain, nonatomic) NSString *errorMsg;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *cityCode;
@property (retain, nonatomic) NSString *nearbyLabelName;
@property (retain, nonatomic) NSString *nearbyTabName;
@property (nonatomic) long long reqFrom;

- (void).cxx_destruct;

@end
