@class AWEAdComponentExamineContext, NSMutableDictionary, NSString;

@interface AWEAdComponentIntersectRule : NSObject <AWEAdComponentExamineBaseRule>

@property (retain, nonatomic) NSMutableDictionary *pairDict;
@property (weak, nonatomic) AWEAdComponentExamineContext *context;
@property (copy, nonatomic) id /* block */ reportBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
