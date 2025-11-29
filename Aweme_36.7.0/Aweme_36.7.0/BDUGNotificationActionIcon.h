@class NSString;

@interface BDUGNotificationActionIcon : NSObject

@property (copy, nonatomic) NSString *templateImageName;
@property (copy, nonatomic) NSString *systemImageName;

+ (id)iconWithSystemImageName:(id)a0;
+ (id)iconWithTemplateImageName:(id)a0;

- (void).cxx_destruct;

@end
