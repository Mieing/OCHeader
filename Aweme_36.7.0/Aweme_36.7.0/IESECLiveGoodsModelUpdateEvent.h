@class NSArray, NSDictionary;

@interface IESECLiveGoodsModelUpdateEvent : NSObject

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *updateGoodsArray;
@property (retain, nonatomic) NSArray *updatedIndexPaths;
@property (nonatomic) long long updateType;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;

@end
