@class NSArray, NSDictionary;

@interface AWEIMGroupJoinPanelFetchResult : NSObject

@property (nonatomic) unsigned long long panelType;
@property (copy, nonatomic) NSArray *itemViewModels;
@property (readonly, copy, nonatomic) NSDictionary *trackDict;

- (id)initWithPanel:(unsigned long long)a0 itemViewModels:(id)a1 trackDict:(id)a2;
- (void).cxx_destruct;

@end
