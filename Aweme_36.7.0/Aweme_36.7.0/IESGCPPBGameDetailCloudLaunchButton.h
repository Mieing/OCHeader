@class NSString;

@interface IESGCPPBGameDetailCloudLaunchButton : GPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *openSchema;
@property (copy, nonatomic) NSString *mapId;
@property (copy, nonatomic) NSString *mapName;
@property (copy, nonatomic) NSString *cgGameid;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *buttonSubtitle;

+ (id)descriptor;

@end
