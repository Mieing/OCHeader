@class NSDictionary, NSArray;

@interface AWESearchComponentBasicModel : NSObject

@property (copy, nonatomic) NSDictionary *logData;
@property (copy, nonatomic) NSDictionary *extraLogData;
@property (copy, nonatomic) NSArray *disableEvent;

- (void).cxx_destruct;
- (BOOL)isAvailable;
- (id)initWithDictionary:(id)a0;

@end
