@class NSMutableString;

@interface GCRunTaskRecordInfo : NSObject

@property (nonatomic) double interval;
@property (retain, nonatomic) NSMutableString *additionalInfo;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
