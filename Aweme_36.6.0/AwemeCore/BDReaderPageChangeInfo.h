@class NSDictionary;

@interface BDReaderPageChangeInfo : NSObject

@property (nonatomic) unsigned long long pageActionType;
@property (nonatomic) BOOL isForward;
@property (nonatomic) unsigned long long changeFrom;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;

@end
