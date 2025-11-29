@class NSString, NSNumber;

@interface PersonalCenterSingleTabInfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *isSetting;
@property (retain, nonatomic) NSNumber *cellName;
@property (copy, nonatomic) NSString *h5Url;

+ (id)makeWithTitle:(id)a0 isSetting:(id)a1 cellName:(id)a2 h5Url:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
