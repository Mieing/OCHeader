@class AWEAdComponentExamineContext, NSString;

@interface AWEAdComponentStateRule : NSObject <AWEAdComponentExamineBaseRule>

@property (weak, nonatomic) AWEAdComponentExamineContext *context;
@property (copy, nonatomic) id /* block */ reportBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkViewIsNormal:(id)a0;
- (long long)getFrameGap;
- (BOOL)isSizeAnimationing:(id)a0;
- (void).cxx_destruct;
- (void)apply;

@end
