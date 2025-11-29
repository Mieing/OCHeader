@class NSString, NSMutableDictionary;

@interface WCCanvasComponentHalfRandomCardPersistenceInfo : MMObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSMutableDictionary *subCardInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_subCardInfos;
+ (void)initialize;

@end
