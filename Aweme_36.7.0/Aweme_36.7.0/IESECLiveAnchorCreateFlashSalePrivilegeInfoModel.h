@class NSString;

@interface IESECLiveAnchorCreateFlashSalePrivilegeInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *subMsg;
@property (nonatomic) BOOL canOperate;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *operateDisableMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
