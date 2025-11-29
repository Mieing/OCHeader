@class NSString, IESECRelationTagListModel, NSDictionary;

@interface IESECWinSelectButtonModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *selectParams;
@property (copy, nonatomic) NSString *buttonName;
@property (copy, nonatomic) NSString *primaryColor;
@property (copy, nonatomic) NSString *selectButtonName;
@property (copy, nonatomic) NSString *selectBackgroundColor;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) IESECRelationTagListModel *selectedTag;
@property (retain, nonatomic) IESECRelationTagListModel *unselectedTag;
@property (copy, nonatomic) NSDictionary *generalData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
