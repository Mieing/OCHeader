@class NSMutableDictionary, NSDictionary, NSHashTable, AWEHPHambCmd;

@interface AWEHPHambListenerNode : NSObject

@property (retain, nonatomic) AWEHPHambCmd *harmCmd;
@property (retain, nonatomic) NSMutableDictionary *subNodeMap;
@property (retain, nonatomic) NSHashTable *listeners;
@property (copy, nonatomic) NSDictionary *config;

- (void).cxx_destruct;
- (id)init;

@end
