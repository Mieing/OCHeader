@class NSString, NSArray, NSNumber;

@interface NotifyTabInfo : NSObject

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSArray *notifyScene;
@property (retain, nonatomic) NSNumber *isDefaultTab;

+ (id)makeWithTabName:(id)a0 notifyScene:(id)a1 isDefaultTab:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
