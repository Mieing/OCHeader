@class NSString;

@interface LVideoInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *vid;
@property (nonatomic) BOOL hasVid;
@property (copy, nonatomic) NSString *businessToken;
@property (nonatomic) BOOL hasBusinessToken;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) BOOL hasAuthToken;
@property (copy, nonatomic) NSString *playAuthToken;
@property (nonatomic) BOOL hasPlayAuthToken;

+ (id)descriptor;

@end
