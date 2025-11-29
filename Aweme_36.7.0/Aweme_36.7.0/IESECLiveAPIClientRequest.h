@class NSString, NSDictionary;

@interface IESECLiveAPIClientRequest : NSObject

@property (retain, nonatomic) NSString *baseURLStr;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) BOOL postMethod;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) Class modelClass;

- (BOOL)isInAnchorAPIList:(id)a0;
- (BOOL)isInAudienceAPIList:(id)a0;
- (BOOL)isPathInCheckLoginListWithInstantType:(long long)a0;
- (void)redirectPathWithData:(id)a0;
- (void)appendCommonParam:(id)a0;
- (void).cxx_destruct;

@end
