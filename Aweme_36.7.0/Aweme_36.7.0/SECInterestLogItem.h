@class NSString;
@protocol SECInterestLogContent;

@interface SECInterestLogItem : NSObject

@property (copy, nonatomic) id<SECInterestLogContent> content;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) double timestamp;

- (id)initWithContent:(id)a0 type:(id)a1 timestamp:(double)a2;
- (id)initWithContent:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (id)logDescription;
- (void)submit;

@end
