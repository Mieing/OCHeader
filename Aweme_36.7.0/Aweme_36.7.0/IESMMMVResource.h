@class NSString, TransformTextureVertices;

@interface IESMMMVResource : NSObject <NSCopying>

@property (retain, nonatomic) NSString *rid;
@property (nonatomic) long long resourceType;
@property (nonatomic) long long resourceFrom;
@property (retain, nonatomic) NSString *resourceContent;
@property (nonatomic) double resource_ts_src_in;
@property (nonatomic) double resource_ts_src_out;
@property (nonatomic) double resource_ts_dest_in;
@property (nonatomic) double resource_ts_dest_out;
@property (retain, nonatomic) TransformTextureVertices *textureVertices;
@property (nonatomic) BOOL resource_is_muted;
@property (nonatomic) long long timeMode;
@property (nonatomic) long long fillMode;

+ (char *)getStrWithResourceType:(long long)a0;
+ (long long)getResourcesTypeWithStr:(char *)a0;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
