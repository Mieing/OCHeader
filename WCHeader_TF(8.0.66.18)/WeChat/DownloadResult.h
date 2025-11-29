@class NSNumber, NSString;

@interface DownloadResult : NSObject

@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *path;

+ (id)makeWithCode:(id)a0 path:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
