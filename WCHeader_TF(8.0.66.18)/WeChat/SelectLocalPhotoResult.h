@class NSString;

@interface SelectLocalPhotoResult : NSObject

@property (nonatomic) long long ret;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *path;

+ (id)makeWithRet:(long long)a0 msg:(id)a1 path:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
