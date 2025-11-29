@interface AWEStudioPublishEditServiceUtils : NSObject

+ (BOOL)shouldUseConfigEndingSymbolTextWithString:(id *)a0 separatorLength:(unsigned long long *)a1;
+ (void)buildAndUpdateEditService:(id)a0 withModel:(id)a1;
+ (void)updateEditService:(id)a0 withModel:(id)a1;
+ (id)generateVideoServiceWithPublishViewModel:(id)a0;
+ (void)buildEditServiceWithProject:(id)a0 completion:(id /* block */)a1;

@end
