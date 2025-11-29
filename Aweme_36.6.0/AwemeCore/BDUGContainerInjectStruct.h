@class NSString;

@interface BDUGContainerInjectStruct : NSObject

@property (copy, nonatomic) NSString *injectKey;
@property (retain, nonatomic) id injectData;

- (id)initWithKey:(id)a0 injectData:(id)a1;
- (void).cxx_destruct;

@end
