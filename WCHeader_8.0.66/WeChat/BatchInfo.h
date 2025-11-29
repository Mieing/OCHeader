@class NSMutableArray;

@interface BatchInfo : NSObject

@property (retain, nonatomic) NSMutableArray *elements;
@property (nonatomic) long long formatType;

- (id)init;
- (void).cxx_destruct;

@end
