@class NSString;

@interface ACCStickerBlockApplyPredicate : NSObject <ACCStickerApplyPredicate>

@property (copy, nonatomic) id /* block */ predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldApplySticker:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithPredicate:(id /* block */)a0;

@end
