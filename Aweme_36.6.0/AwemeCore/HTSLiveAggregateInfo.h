@class NSString;

@interface HTSLiveAggregateInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *aggregateSeq;
@property (nonatomic) BOOL canAggregate;

+ (id)descriptor;

@end
