@class NSString, AWEShareContext;

@interface AWEIMContactPickerMentionGroupShareContext : NSObject

@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) NSString *shareText;
@property (copy, nonatomic) id /* block */ jumpConvFinishBlock;
@property (copy, nonatomic) id /* block */ viewDidDisappearHasSelectGroupBlock;

- (void).cxx_destruct;

@end
