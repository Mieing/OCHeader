@class NSMutableArray;

@interface IESECShopEventRecord : NSObject

@property (nonatomic) unsigned long long tabType;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) double scrollOffset;

- (id)initWithTabType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
