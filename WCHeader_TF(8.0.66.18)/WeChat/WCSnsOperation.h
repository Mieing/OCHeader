@class NSString, WCSnsPreLoadInfo, WCSnsRepeatUrlInfo, WCSnsDelayShowInfo, WCSnsSocialInfluenceInfo;

@interface WCSnsOperation : MMObject <PBCoding>

@property (retain, nonatomic) WCSnsSocialInfluenceInfo *socialInfluenceInfo;
@property (retain, nonatomic) WCSnsPreLoadInfo *preloadInfo;
@property (retain, nonatomic) WCSnsDelayShowInfo *delayShowInfo;
@property (retain, nonatomic) WCSnsRepeatUrlInfo *repeatUrlInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_socialInfluenceInfo;
+ (void)PBArrayAdd_preloadInfo;
+ (void)PBArrayAdd_delayShowInfo;
+ (void)PBArrayAdd_repeatUrlInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
