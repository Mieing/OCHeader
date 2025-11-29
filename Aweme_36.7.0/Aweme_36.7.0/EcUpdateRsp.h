@class NSString, EcUpdateData, EcUpdatePagination;

@interface EcUpdateRsp : NSObject

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) EcUpdateData *data;
@property (retain, nonatomic) EcUpdatePagination *pagination;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
