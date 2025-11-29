@class AWEEcomImageSearchRequestContext;

@interface AWEEcomSearchImageRequestWrapper : NSObject

@property (nonatomic) BOOL completionExecuted;
@property (retain, nonatomic) AWEEcomImageSearchRequestContext *context;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ responseBlock;
@property (copy, nonatomic) id /* block */ detectionsBlock;

- (void).cxx_destruct;

@end
