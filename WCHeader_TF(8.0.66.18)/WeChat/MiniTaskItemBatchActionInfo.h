@class NSString;

@interface MiniTaskItemBatchActionInfo : NSObject

@property (nonatomic) unsigned long long action;
@property (nonatomic) long long itemCount;
@property (retain, nonatomic) NSString *detail;

- (void).cxx_destruct;

@end
