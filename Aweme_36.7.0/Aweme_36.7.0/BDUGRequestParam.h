@class NSString;

@interface BDUGRequestParam : BDUGBaseRequestParam

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *pushSDK;
@property (copy, nonatomic) NSString *versionCode;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *package;
@property (copy, nonatomic) NSString *notice;
@property (copy, nonatomic) NSString *os;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *appRegion;
@property (copy, nonatomic) NSString *appLanguage;

- (void).cxx_destruct;
- (id)init;

@end
