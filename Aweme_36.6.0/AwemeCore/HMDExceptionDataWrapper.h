@class NSMutableArray, NSMutableDictionary;

@interface HMDExceptionDataWrapper : NSObject

@property (readonly, nonatomic) NSMutableArray *modules;
@property (readonly, nonatomic) NSMutableArray *dataDicts;
@property (readonly, nonatomic) NSMutableDictionary *dataTypeDicts;
@property (readonly, nonatomic) NSMutableDictionary *uuidTypeDicts;

- (void)dealWithExceptionData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
