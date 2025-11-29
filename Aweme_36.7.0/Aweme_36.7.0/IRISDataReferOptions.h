@class NSString, NSDictionary;
@protocol IRISDataReferTrackable;

@interface IRISDataReferOptions : NSObject

@property (copy, nonatomic) NSString *source;
@property (weak, nonatomic) id<IRISDataReferTrackable> objectRef;
@property (retain, nonatomic) NSDictionary *referData;

+ (id)optionsWithSource:(id)a0;

- (id)bindData:(id)a0;
- (id)bindObject:(id)a0;
- (void).cxx_destruct;

@end
