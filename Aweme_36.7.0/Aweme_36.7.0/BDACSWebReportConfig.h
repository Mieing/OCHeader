@class NSArray;

@interface BDACSWebReportConfig : NSObject

@property (readonly, nonatomic) BOOL enable;
@property (readonly, copy, nonatomic) NSArray *contentType;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
