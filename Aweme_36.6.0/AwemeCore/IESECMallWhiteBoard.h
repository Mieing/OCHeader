@class NSString, IESECLynxCard;

@interface IESECMallWhiteBoard : NSObject

@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSString *lynxGroupID;
@property (retain, nonatomic) IESECLynxCard *boardLynxCard;

- (id)initWith:(id)a0 lynxGroupID:(id)a1;
- (double)subscribeForItemKey:(id)a0 withCallback:(id /* block */)a1;
- (void)unSubscribeItemKey:(id)a0 withId:(double)a1;
- (void)_setItemKey:(id)a0 withData:(id)a1;
- (void)_getItemKey:(id)a0 withCallback:(id /* block */)a1;
- (void)getNumberForKey:(id)a0 withCallback:(id /* block */)a1;
- (void)getStringForKey:(id)a0 withCallback:(id /* block */)a1;
- (void)getArrayForKey:(id)a0 withCallback:(id /* block */)a1;
- (void)getDictionary:(id)a0 withCallback:(id /* block */)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id)description;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;

@end
