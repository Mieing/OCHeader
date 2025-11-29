@class NSString;

@interface AWEDPSchemaManager : NSObject

@property (copy, nonatomic) NSString *curURL;
@property (nonatomic) double curRecordTime;
@property (copy, nonatomic) NSString *scene;

+ (id)sharedInstance;

- (BOOL)canOpenURL:(id)a0 referType:(id)a1 silent:(BOOL)a2;
- (BOOL)canOpenURL:(id)a0 referType:(id)a1;
- (void)trackRecord:(id)a0 refer:(id)a1;
- (id)fetchDeeplinkEntry;
- (void).cxx_destruct;
- (BOOL)settingEnabled;
- (id)init;

@end
