@class NSString, AWENearbyBigCardInteractionManager, AWENearbyPageContext;

@interface AWENearbyCardFeedDataModel : NSObject

@property (nonatomic) long long cellType;
@property (retain, nonatomic) id rawData;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (retain, nonatomic) AWENearbyBigCardInteractionManager *interactionManager;

- (void).cxx_destruct;

@end
