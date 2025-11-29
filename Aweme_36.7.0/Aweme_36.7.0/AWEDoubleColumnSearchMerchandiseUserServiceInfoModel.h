@class AWEDoubleColumnSearchMerchandiseTextTagModel, NSString, NSNumber, AWEURLModel;

@interface AWEDoubleColumnSearchMerchandiseUserServiceInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *buttonType;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) AWEURLModel *entryIcon;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseTextTagModel *textTag;
@property (copy, nonatomic) NSString *backgroundLight;
@property (copy, nonatomic) NSString *backgroundDark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
