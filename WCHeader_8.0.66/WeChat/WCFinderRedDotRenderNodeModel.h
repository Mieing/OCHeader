@class NSMutableString, UIView;

@interface WCFinderRedDotRenderNodeModel : NSObject

@property (nonatomic) BOOL renderRet;
@property (nonatomic) double exceedWidth;
@property (nonatomic) double leftLine;
@property (nonatomic) BOOL isTruncated;
@property (nonatomic) unsigned long long textLineNumber;
@property (weak, nonatomic) UIView *redDotRenderView;
@property (nonatomic) unsigned long long remakeFlag;
@property (retain, nonatomic) NSMutableString *reddotShowContent;

- (id)init;
- (id)yy_modelDeepCopyWithConfigTag:(id)a0;
- (id)mutableCopy;
- (void).cxx_destruct;

@end
