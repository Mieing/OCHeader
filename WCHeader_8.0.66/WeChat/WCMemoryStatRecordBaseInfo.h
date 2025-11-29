@class NSString, NSData;

@interface WCMemoryStatRecordBaseInfo : MatrixBaseModel

@property (nonatomic) unsigned long long launchTime;
@property (retain, nonatomic) NSString *userScene;
@property (retain, nonatomic) NSString *systemVersion;
@property (retain, nonatomic) NSString *appUUID;
@property (retain, nonatomic) NSData *vmRegionsData;
@property (nonatomic) BOOL isValid;

- (id)init;
- (void).cxx_destruct;

@end
