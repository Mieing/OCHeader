@class NSSet;

@interface BDUGNotificationConfig : NSObject

@property (retain, nonatomic) NSSet *categories;
@property (nonatomic) unsigned long long options;

+ (id)configureNotificationWithCategories:(id)a0 options:(unsigned long long)a1;

- (void).cxx_destruct;

@end
