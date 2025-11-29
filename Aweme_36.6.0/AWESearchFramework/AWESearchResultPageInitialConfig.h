@class NSArray, AWESearchStateContext;

@interface AWESearchResultPageInitialConfig : NSObject

@property (nonatomic) unsigned long long tabManagerType;
@property (copy, nonatomic) NSArray *tabModels;
@property (weak, nonatomic) AWESearchStateContext *stateContext;

- (void).cxx_destruct;

@end
