@class NSIndexPath;

@interface IESECShopProductsPlayableTask : NSObject {
    id /* block */ _resumeAction;
}

@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (void)resume;

@end
