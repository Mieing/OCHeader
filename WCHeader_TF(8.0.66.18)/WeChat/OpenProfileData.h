@class NSString;

@interface OpenProfileData : MMObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *extMsg;
@property (nonatomic) int scene;
@property (nonatomic) int profileType;

- (void)dealloc;
- (void).cxx_destruct;

@end
