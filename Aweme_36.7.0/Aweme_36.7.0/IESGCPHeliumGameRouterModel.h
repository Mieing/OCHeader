@class NSString, NSNumber, NSDictionary;

@interface IESGCPHeliumGameRouterModel : NSObject

@property (readonly, copy, nonatomic) NSString *timorScene;
@property (readonly, copy, nonatomic) NSString *timorLocation;
@property (readonly, copy, nonatomic) NSString *timorRole;
@property (readonly, copy, nonatomic) NSString *timorAppId;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long launchScene;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) NSNumber *roomId;
@property (nonatomic) unsigned long long promoteScene;
@property (copy, nonatomic) id /* block */ notAllowLaunchBlock;
@property (copy, nonatomic) id /* block */ allowLaunchBlock;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
