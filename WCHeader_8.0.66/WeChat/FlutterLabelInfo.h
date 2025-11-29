@class NSString, NSArray;

@interface FlutterLabelInfo : NSObject

@property (nonatomic) long long labelId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *userList;

+ (id)makeWithLabelId:(long long)a0 name:(id)a1 userList:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
