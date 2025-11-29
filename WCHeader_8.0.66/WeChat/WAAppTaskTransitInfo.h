@class NSString;

@interface WAAppTaskTransitInfo : NSObject

@property (retain, nonatomic) NSString *adUxInfo;
@property (copy, nonatomic) NSString *commonUxInfo;
@property (retain, nonatomic) NSString *traceId;

- (id)description;
- (void).cxx_destruct;

@end
