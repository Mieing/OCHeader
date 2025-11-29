@class NSString, NSArray;

@interface AWEIMMultiTabShareListContext : NSObject

@property (copy, nonatomic) id /* block */ sendBlock;
@property (copy, nonatomic) NSString *panelTitle;
@property (copy, nonatomic) NSArray *dataTabArray;
@property (nonatomic) BOOL isMultiMode;

- (void).cxx_destruct;

@end
