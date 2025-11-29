@class NSArray, AWEElementGroupLayoutConfig, AWEHorizontalElement;

@interface AWEElementGroup : NSObject

@property (retain, nonatomic) NSArray *elements;
@property (nonatomic) long long originSortIndex;
@property (retain, nonatomic) AWEElementGroupLayoutConfig *layoutConfig;
@property (retain, nonatomic) AWEHorizontalElement *horizontalElement;

- (void).cxx_destruct;
- (id)initWithElements:(id)a0;

@end
