@class ACCEditBeautyEffectDDDataIterator, NSOrderedSet;

@interface ACCEditBeautyEffectDDExecuter : ACCEditBeautyEffectDDProtoProxy

@property (copy, nonatomic) id /* block */ data;
@property (copy, nonatomic) id /* block */ recorder;
@property (retain, nonatomic) ACCEditBeautyEffectDDDataIterator *dataIterator;
@property (copy, nonatomic) id /* block */ notify;
@property (copy, nonatomic) id /* block */ implsForActions;
@property (copy) NSOrderedSet *impls;

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
