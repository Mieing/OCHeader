@class NSString, IESECGoodsDetailSellingPointModel;

@interface IESECGoodsDetailAuthorLiveEntryModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL living;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *logExtraJSONString;
@property (retain, nonatomic) IESECGoodsDetailSellingPointModel *sellingPointInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldShowLiveEntry;
- (void).cxx_destruct;

@end
