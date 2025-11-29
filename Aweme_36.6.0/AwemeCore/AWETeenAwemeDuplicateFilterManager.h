@class NSMutableSet, NSDate;

@interface AWETeenAwemeDuplicateFilterManager : NSObject

@property (retain, nonatomic) NSMutableSet *yesterDaySet;
@property (retain, nonatomic) NSMutableSet *todaySet;
@property (retain, nonatomic) NSDate *todayDate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)setSet:(id)a0 forKey:(id)a1;
- (void)addAwemeID:(id)a0;
- (void).cxx_destruct;
- (void)setDate:(id)a0 forKey:(id)a1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDuplicate:(id)a0;
- (id)dateForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)setForKey:(id)a0;

@end
