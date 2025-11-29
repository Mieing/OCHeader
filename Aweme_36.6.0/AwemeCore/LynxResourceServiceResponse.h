@class IESForestResponse, NSString;

@interface LynxResourceServiceResponse : NSObject <LynxServiceResourceResponseProtocol>

@property (retain, nonatomic) IESForestResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)expiredDate;
- (id)errorInfo;
- (id)resourceInfo;
- (id)calculatedMetricInfo;
- (id)loaderInfo;
- (id)debugInfo;
- (void).cxx_destruct;
- (id)cacheKey;
- (id)bundle;
- (id)resolvedURL;
- (id)fetcher;
- (id)metricInfo;
- (BOOL)isTemplate;
- (id)channel;
- (unsigned long long)version;
- (BOOL)isSuccess;
- (id)initWithResponse:(id)a0;
- (id)data;
- (id)sourceUrl;
- (id)accessKey;
- (id)absolutePath;
- (id)extraInfo;
- (id)sourceTypeDescription;

@end
