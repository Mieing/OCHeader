@interface IESLiveEventSummary : NSObject

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long maxlength;
@property (nonatomic) unsigned long long frequency;

- (id)init;
- (void)reset;

@end
