@class NSDictionary;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEECommerceBuyButtonViewBarContext : NSObject

@property (retain, nonatomic) id<AWEAwemeDetailBottomBarCommonContextProtocol> commonCtx;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) id /* block */ assignLogExtraDictBlock;

- (void).cxx_destruct;

@end
