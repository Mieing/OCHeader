@class NSString, NSArray;

@interface BDUGNotificationCategory : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *intentIdentifiers;
@property (copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (copy, nonatomic) NSString *categorySummaryFormat;
@property (nonatomic) unsigned long long options;

+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 intentIdentifiers:(id)a2 options:(unsigned long long)a3;
+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 intentIdentifiers:(id)a2 hiddenPreviewsBodyPlaceholder:(id)a3 categorySummaryFormat:(id)a4 options:(unsigned long long)a5;

- (void).cxx_destruct;

@end
