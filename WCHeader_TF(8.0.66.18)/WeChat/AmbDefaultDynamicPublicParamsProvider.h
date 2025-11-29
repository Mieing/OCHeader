@class NSString, DataReportDefaultDynamicPublicParamsProvider;

@interface AmbDefaultDynamicPublicParamsProvider : NSObject <AmoebaDynamicPublicParamsProvider> {
    DataReportDefaultDynamicPublicParamsProvider *defaultDynamicPublicParamsProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
