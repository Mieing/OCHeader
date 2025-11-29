@class NSString;

@interface WCFinderLiteAppInfo : NSObject <WCFinderLiteAppInfoProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *minVersion;
@property (nonatomic) unsigned int openType;
@property (nonatomic) unsigned int heightPercent;
@property (nonatomic) BOOL isTransparent;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

@end
