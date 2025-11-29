@class NSString, BDUGNotificationActionIcon;

@interface BDUGNotificationAction : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) BDUGNotificationActionIcon *icon;

+ (id)actionWithIdentifier:(id)a0 title:(id)a1 options:(unsigned long long)a2 icon:(id)a3;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1 options:(unsigned long long)a2;

- (void).cxx_destruct;

@end
