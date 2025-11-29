@class NSArray, NSMutableArray;

@interface CSJSchemeDetector : NSObject

@property (nonatomic) unsigned long long activity;
@property (copy, nonatomic) NSArray *schemeList;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) NSMutableArray *successList;
@property (retain, nonatomic) NSMutableArray *failureList;
@property (nonatomic) struct __CFRunLoopObserver { } *observer;
@property (copy, nonatomic) id /* block */ completion;

- (void)checkScheme;
- (void)reportList;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
