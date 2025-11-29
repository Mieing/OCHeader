@class NSString, UIImage;

@interface IESIMMangoTokenSharePlatformModel : NSObject

@property (readonly, copy, nonatomic) NSString *platform;
@property (readonly, copy, nonatomic) NSString *openSchema;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *behaviorID;
@property (readonly, copy, nonatomic) NSString *activityName;
@property (readonly, copy, nonatomic) NSString *lynxSchema;

- (id)initWithPlatform:(id)a0 behaviorID:(id)a1 activityName:(id)a2 lynxSchema:(id)a3;
- (id)p_platformTitle;
- (id)p_platformImage;
- (id)p_iconImageFromLiteBundlePlatform:(id)a0;
- (void).cxx_destruct;
- (id)trackName;

@end
