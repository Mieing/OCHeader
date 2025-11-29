@class NSString, IESECEntranceInfoScene, NSDictionary, NSMutableSet, IESECEntranceInfoChecker;

@interface IESECEntranceInfo : NSObject <IESECEntranceInfo> {
    NSDictionary *_entranceData;
    NSMutableSet *_putKeys;
    NSMutableSet *_removeKeys;
}

@property (retain, nonatomic) IESECEntranceInfoScene *entranceInfoScene;
@property (nonatomic) BOOL hasModified;
@property (retain, nonatomic) IESECEntranceInfoChecker *checker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objValueForKey:(id)a0;
- (id)entranceInfoString;
- (id)entranceInfoDict;
- (id)initWithEntranceInfoScene:(id)a0 originDict:(id)a1;
- (void)entrance_setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (long long)integerValueForKey:(id)a0;
- (id)stringValueForKey:(id)a0;
- (id)numberValueForKey:(id)a0;
- (BOOL)boolValueForKey:(id)a0;

@end
