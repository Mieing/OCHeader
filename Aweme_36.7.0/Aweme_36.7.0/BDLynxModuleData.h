@class NSString, NSDictionary;

@interface BDLynxModuleData : NSObject

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *storagePath;
@property (copy, nonatomic) NSString *verifyURL;
@property (copy, nonatomic) NSString *publishVersion;
@property (retain, nonatomic) NSDictionary *customFileds;
@property (nonatomic) BOOL iSOneCard;

- (void).cxx_destruct;

@end
