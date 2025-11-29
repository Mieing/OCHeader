@protocol WCFinderStatReportShim;

@interface WCFinderStatReportShimInfo : NSObject

@property (readonly, weak, nonatomic) id<WCFinderStatReportShim> shim;
@property (readonly, nonatomic) BOOL customFilter;

- (id)initWithShim:(id)a0;
- (void)update:(id)a0;
- (void).cxx_destruct;

@end
