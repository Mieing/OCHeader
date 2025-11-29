@class NSArray, NSString, IESECLiveCardExtendTableHeaderModel;

@interface IESECLiveCardExtendTableModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveCardExtendTableHeaderModel *header;
@property (retain, nonatomic) NSArray *rows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rowsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
