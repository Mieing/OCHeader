@class NSString;

@interface IESGCPGameMetaDataBizAttributeModel : NSObject

@property (readonly, copy, nonatomic) NSString *bizTypeString;
@property (nonatomic) unsigned long long bizType;
@property (copy, nonatomic) NSString *bizId;
@property (copy, nonatomic) NSString *bizMode;
@property (copy, nonatomic) NSString *bizExtra;

- (void).cxx_destruct;

@end
