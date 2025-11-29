@class NSDictionary;

@interface AWETokamakThreadPriorityManager : NSObject

@property (retain, nonatomic) NSDictionary *containDict;
@property (retain, nonatomic) NSDictionary *equalDict;

+ (id)shared;

- (void).cxx_destruct;
- (void)run;

@end
