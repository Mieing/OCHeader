@class WCFinderDataItem;

@interface WCFinderDataitemSceneObj : NSObject

@property (nonatomic) int scene;
@property (retain, nonatomic) WCFinderDataItem *dataItem;

+ (id)objWithDataItem:(id)a0 scene:(int)a1;

- (void).cxx_destruct;

@end
