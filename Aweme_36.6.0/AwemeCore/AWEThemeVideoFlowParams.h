@protocol AWEMemoriesTileModelProtocol;

@interface AWEThemeVideoFlowParams : NSObject

@property (retain, nonatomic) id<AWEMemoriesTileModelProtocol> tileModel;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
