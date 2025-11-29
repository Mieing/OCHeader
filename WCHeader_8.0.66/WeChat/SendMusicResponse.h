@class NSString;

@interface SendMusicResponse : NSObject

@property (copy, nonatomic) NSString *userName;

+ (id)makeWithUserName:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
