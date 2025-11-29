@class NSString, NSMutableArray;

@interface MMTemplateMsgAccountCache : MMObject <PBCoding, NSCopying>

@property (nonatomic) BOOL isGlobalNotify;
@property (retain, nonatomic) NSMutableArray *weappList;
@property (retain, nonatomic) NSMutableArray *bizsvrList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_isGlobalNotify;
+ (void)PBArrayAdd_weappList;
+ (void)PBArrayAdd_bizsvrList;
+ (void)initialize;

@end
