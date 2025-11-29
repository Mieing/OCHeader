@class NSString, AWENearbyC2HeaderToolDataModel;

@interface AWENearbyC2HeaderToolEntranceResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyC2HeaderToolDataModel *toolData;
@property (nonatomic) BOOL isFromSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)toolDataJSONTransformer;

- (void).cxx_destruct;

@end
