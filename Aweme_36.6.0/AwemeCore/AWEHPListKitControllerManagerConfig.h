@protocol AWEHPListKitControllerModelProtocol;

@interface AWEHPListKitControllerManagerConfig : NSObject

@property (nonatomic) BOOL reuseItemController;
@property (retain, nonatomic) id<AWEHPListKitControllerModelProtocol> originModel;
@property (copy, nonatomic) id /* block */ moduleContextBlock;
@property (copy, nonatomic) id /* block */ itemContextBlock;
@property (copy, nonatomic) id /* block */ createItemCompleteBlock;
@property (copy, nonatomic) id /* block */ loadCompleteBlock;

- (void).cxx_destruct;
- (id)description;

@end
