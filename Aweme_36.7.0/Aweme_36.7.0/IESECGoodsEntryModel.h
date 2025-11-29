@class NSString, IESECURLModel;

@interface IESECGoodsEntryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *entryText;
@property (copy, nonatomic) NSString *entryUrl;
@property (retain, nonatomic) IESECURLModel *entryIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
