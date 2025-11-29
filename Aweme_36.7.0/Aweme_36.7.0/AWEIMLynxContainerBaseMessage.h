@class NSString;

@interface AWEIMLynxContainerBaseMessage : AWEIMMessage

@property (nonatomic) BOOL ignoreLynxSizeCallBack;
@property (nonatomic) double lynxContainerHeight;
@property (nonatomic) BOOL hasLynxCallBackHeight;
@property (copy, nonatomic) NSString *pushDetail;

- (id)initWithContentDict:(id)a0;
- (void).cxx_destruct;

@end
