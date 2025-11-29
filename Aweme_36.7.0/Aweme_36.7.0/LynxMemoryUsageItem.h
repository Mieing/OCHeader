@class NSString, NSNumber, NSDictionary;

@interface LynxMemoryUsageItem : NSObject

@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSNumber *sizeBytes;
@property (retain, nonatomic) NSDictionary *detail;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
