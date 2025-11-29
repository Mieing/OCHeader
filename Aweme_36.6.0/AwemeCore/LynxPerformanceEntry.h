@class NSString, NSDictionary;

@interface LynxPerformanceEntry : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *entryType;
@property (retain, nonatomic) NSDictionary *rawDictionary;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)a0;

@end
