@class NSString;

@interface IESIMSearchEngineOperation : NSOperation

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) id /* block */ operation;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (void)main;

@end
