@class IESForestResponse;

@interface IESForestDiscardableResponse : IESForestResponse <NSDiscardableContent>

@property (retain, nonatomic) IESForestResponse *internalResponse;

- (void)discardContentIfPossible;
- (void).cxx_destruct;
- (BOOL)isContentDiscarded;
- (void)endContentAccess;
- (BOOL)beginContentAccess;

@end
