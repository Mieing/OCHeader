@class NSDictionary, NSError;

@interface TTTrackerException : NSObject

@property (nonatomic) long long scene;
@property (nonatomic) long long type;
@property (nonatomic) long long level;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSError *error;

+ (id)exceptionWithScene:(long long)a0 type:(long long)a1 level:(long long)a2 extra:(id)a3 localizedDescription:(id)a4;
+ (id)exceptionWithScene:(long long)a0 type:(long long)a1 level:(long long)a2 extra:(id)a3 error:(id)a4;

- (id)initWithScene:(long long)a0 type:(long long)a1 level:(long long)a2 extra:(id)a3 error:(id)a4;
- (void).cxx_destruct;

@end
