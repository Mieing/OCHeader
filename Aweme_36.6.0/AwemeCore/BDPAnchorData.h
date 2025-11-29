@class NSString, BDPUniqueID;

@interface BDPAnchorData : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appIcon;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *entryPagePath;
@property (copy, nonatomic) NSString *mpPosition;

- (void).cxx_destruct;

@end
