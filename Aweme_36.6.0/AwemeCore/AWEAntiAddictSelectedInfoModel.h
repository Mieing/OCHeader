@class NSString, NSNumber;

@interface AWEAntiAddictSelectedInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *primaryTitle;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSNumber *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEmptyModel;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
