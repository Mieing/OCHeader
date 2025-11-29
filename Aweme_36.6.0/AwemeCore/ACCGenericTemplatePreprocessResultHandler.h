@class NSArray, NSError;

@interface ACCGenericTemplatePreprocessResultHandler : NSObject

@property (retain, nonatomic) NSArray *preprocessResults;
@property (retain, nonatomic) NSError *requestError;

- (id)initWithResults:(id)a0 requestError:(id)a1;
- (void).cxx_destruct;

@end
