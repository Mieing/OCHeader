@class NSString;

@interface AppPersonalInfoItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *infoXml;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_infoXml;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)parseXML;
- (void).cxx_destruct;

@end
