@class NSString, AWEURLModel;

@interface AWEDoubleColumnSearchMerchandiseTextTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textTagType;
@property (retain, nonatomic) AWEURLModel *textLeftIcon;
@property (nonatomic) unsigned long long textStyle;
@property (nonatomic) BOOL hideLeftIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
