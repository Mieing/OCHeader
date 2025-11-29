@class NSMutableDictionary;

@interface IESECOperationPathHelperManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;

- (id)buildPathHelperWithPath:(id)a0;
- (id)pathHelperWithPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAllDigits:(id)a0;

@end
