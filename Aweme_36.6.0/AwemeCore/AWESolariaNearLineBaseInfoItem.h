@class NSMutableDictionary;

@interface AWESolariaNearLineBaseInfoItem : NSObject

@property (nonatomic) long long beginMs;
@property (nonatomic) long long endMs;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSMutableDictionary *cache;

- (void)put:(id)a0 value:(id)a1;
- (void)plus:(id)a0 value:(long long)a1;
- (id)toMap;
- (void)fromJSON:(id)a0;
- (void)remove:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)toJSON;

@end
