@class NSString, AWEURLModel, AWEAwemeModel;

@interface AWEECGiftModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *horizontalCardName;
@property (copy, nonatomic) AWEAwemeModel *awemeData;
@property (retain, nonatomic) AWEURLModel *backgroundImage;
@property (nonatomic) BOOL isSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
