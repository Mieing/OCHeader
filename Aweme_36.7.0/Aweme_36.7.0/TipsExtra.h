@class NSString;

@interface TipsExtra : GPBMessage

@property (copy, nonatomic) NSString *linkType;
@property (nonatomic) BOOL hasLinkType;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL hasScene;

+ (id)descriptor;

@end
