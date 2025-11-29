@class BDXLynxAirActionMetaBundle, NSDictionary, BDXThreadSafeDictionary, BDXLynxKitParams;

@interface BDXLynxAirDataCenter : NSObject

@property (weak, nonatomic) BDXLynxKitParams *params;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSDictionary *initialData;
@property (retain, nonatomic) BDXLynxAirActionMetaBundle *meta;
@property (retain, nonatomic) BDXThreadSafeDictionary *elementActions;

- (void)updateDataWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
