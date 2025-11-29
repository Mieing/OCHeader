@class AWEAwemeModel, NSArray, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AFDStoryDiverseDiggContext : NSObject

@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *pageContext;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSArray *diverseDiggModels;
@property (nonatomic) long long diverseDiggClickType;

- (void).cxx_destruct;

@end
