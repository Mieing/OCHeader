@class NSString, NSMutableArray;

@interface WASyncIssueLaunchCmd : WASyncBaseCmd

@property (copy, nonatomic) NSString *launchInfoString;
@property (retain, nonatomic) NSMutableArray *sceneList;
@property (nonatomic) unsigned int useBeginTime;
@property (nonatomic) unsigned int useEndTime;

- (id)description;
- (void).cxx_destruct;

@end
