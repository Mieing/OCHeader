@class NSArray;

@interface QMapLoggerConfig : NSObject

@property (nonatomic) BOOL toFile;
@property (nonatomic) BOOL toConsole;
@property (nonatomic) int level;
@property (copy, nonatomic) NSArray *tags;

- (void).cxx_destruct;

@end
