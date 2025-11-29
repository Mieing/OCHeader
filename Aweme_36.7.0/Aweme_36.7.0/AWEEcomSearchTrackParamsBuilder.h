@class NSDictionary, NSMutableDictionary;

@interface AWEEcomSearchTrackParamsBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *innerParams;
@property (readonly, nonatomic) id /* block */ searchID;
@property (readonly, nonatomic) id /* block */ logPb;
@property (readonly, nonatomic) id /* block */ rank;
@property (retain, nonatomic) NSMutableDictionary *innerParams;
@property (readonly, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) id /* block */ addKVPair;
@property (readonly, nonatomic) id /* block */ addKVString;
@property (readonly, nonatomic) id /* block */ addKVDict;
@property (readonly, nonatomic) id /* block */ addKVArray;
@property (readonly, nonatomic) id /* block */ addKVInteger;
@property (readonly, nonatomic) id /* block */ mergeDict;

+ (id)builderWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;

@end
