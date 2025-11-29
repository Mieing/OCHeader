@class NSMutableSet;

@interface IESLiveAssetDeleteingStruct : NSObject

@property (retain, nonatomic) NSMutableSet *waitDeleteAssetIds;
@property (copy, nonatomic) id /* block */ deleteCompletion;

- (void).cxx_destruct;

@end
