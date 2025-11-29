@class NSMutableDictionary;

@interface WCDBSchemaInfo : NSObject {
    NSMutableDictionary *_infos;
}

- (id)getOrCreateInfo:(id)a0;
- (void)addSchema:(id)a0;
- (void)addSequence:(id)a0;
- (void)setCount:(id)a0 forTable:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
