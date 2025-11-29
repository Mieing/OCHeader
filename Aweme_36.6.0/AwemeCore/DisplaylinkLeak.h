@class NSString;

@interface DisplaylinkLeak : GPBMessage

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *description_p;
@property (copy, nonatomic) NSString *view;
@property (copy, nonatomic) NSString *viewTree;
@property (nonatomic) double createdTime;
@property (nonatomic) int thermalState;
@property (copy, nonatomic) NSString *hiddenView;
@property (copy, nonatomic) NSString *src;
@property (copy, nonatomic) NSString *animationId;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
