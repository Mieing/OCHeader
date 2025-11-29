@class NSString, NSDate;

@interface BDPModelMetrics : NSObject <NSCopying>

@property (nonatomic) double requestStart;
@property (nonatomic) double requestEnd;
@property (nonatomic) double readStart;
@property (nonatomic) double readEnd;
@property (nonatomic) double parseStart;
@property (nonatomic) double parseEnd;
@property (readonly, nonatomic) NSString *source;
@property (retain, nonatomic) NSDate *loadEndDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
