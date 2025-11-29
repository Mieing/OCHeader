@class NSString;

@interface SAMICore_TraceSpanParameter : NSObject

@property (retain, nonatomic) NSString *traceId;
@property (retain, nonatomic) NSString *traceSpanParentName;
@property (retain, nonatomic) NSString *traceSpanParentId;

- (void)dealloc;

@end
