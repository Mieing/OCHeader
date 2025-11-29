@class AWEAdComponentExamineContext, NSString;

@interface AWEAdComponentContainerRule : NSObject <AWEAdComponentExamineBaseRule>

@property (nonatomic) BOOL isFinish;
@property (weak, nonatomic) AWEAdComponentExamineContext *context;
@property (copy, nonatomic) id /* block */ reportBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)apply;

@end
