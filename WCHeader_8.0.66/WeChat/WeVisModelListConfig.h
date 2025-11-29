@class NSString, NSMutableArray;

@interface WeVisModelListConfig : NSObject <YYModel, NSCopying>

@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) long long sdkVersion;
@property (nonatomic) long long configVersion;
@property (retain, nonatomic) NSMutableArray *modelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)modelListInfo;
- (id)invalidModelListInfo;
- (void)reportModelRes:(unsigned int)a0;
- (void).cxx_destruct;

@end
