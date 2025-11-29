@class NSString, ImageLoadPerformanceInfo;

@interface AvatarInfo : NSObject

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) ImageLoadPerformanceInfo *loadInfo;

+ (id)makeWithPath:(id)a0 loadInfo:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
