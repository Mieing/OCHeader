@class NSString, NSArray;

@interface IESLiveNativeAppPermissionIntroModel : NSObject

@property (copy, nonatomic) NSString *introImageURI;
@property (copy, nonatomic) NSString *talentH5URL;
@property (copy, nonatomic) NSString *helpURL;
@property (nonatomic) BOOL showYellowPoint;
@property (nonatomic) BOOL permit;
@property (nonatomic) BOOL showIntroPanel;
@property (nonatomic) BOOL showNewPanel;
@property (nonatomic) int permitStatus;
@property (retain, nonatomic) NSArray *permissionStatusInfo;
@property (readonly, nonatomic) BOOL isHasTimorPermit;

- (id)getIntroInfoDict;
- (void).cxx_destruct;
- (id)initWithResponseData:(id)a0;

@end
