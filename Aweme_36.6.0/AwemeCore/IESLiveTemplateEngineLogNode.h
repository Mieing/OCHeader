@class NSMutableArray;

@interface IESLiveTemplateEngineLogNode : NSObject

@property (retain, nonatomic) NSMutableArray *errors;

- (void)appendError:(id)a0;
- (BOOL)containsError;
- (id)imagePieceErrors;
- (void).cxx_destruct;
- (id)allErrors;
- (id)init;

@end
