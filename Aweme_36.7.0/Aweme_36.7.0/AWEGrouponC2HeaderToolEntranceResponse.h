@class AWEGrouponC2HeaderToolDataModel, NSString;

@interface AWEGrouponC2HeaderToolEntranceResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponC2HeaderToolDataModel *toolData;
@property (nonatomic) BOOL isFromSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)toolDataJSONTransformer;

- (void).cxx_destruct;

@end
