@class NSString, NSMutableString, UIView;

@interface WCFinderRedDotRenderResultModel : NSObject

@property (nonatomic) unsigned long long textLineNumber;
@property (nonatomic) unsigned long long renderType;
@property (nonatomic) BOOL overWidth;
@property (nonatomic) double exceedWidth;
@property (retain, nonatomic) NSMutableString *reddotShowContent;
@property (weak, nonatomic) UIView *redDotRenderView;
@property (nonatomic) unsigned long long remakeFlag;
@property (copy, nonatomic) NSString *renderStrategyId;

- (id)init;
- (id)yy_modelDeepCopyWithConfigTag:(id)a0;
- (id)mutableCopy;
- (void).cxx_destruct;

@end
