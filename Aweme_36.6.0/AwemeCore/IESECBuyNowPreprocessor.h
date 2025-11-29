@class NSString, NSMutableArray;

@interface IESECBuyNowPreprocessor : NSObject <YataDataPreprocessor>

@property (retain, nonatomic) NSMutableArray *preprocessorComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)beginDataPreprocessor:(id)a0;
- (void)injectPreprocessorComponent:(id)a0;
- (void).cxx_destruct;

@end
