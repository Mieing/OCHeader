@class NSString, NSArray, NSDictionary, NSNumber, NSIndexPath;

@interface IESECLiveAnchorCreateFlashSaleItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *order;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic) BOOL isRequired;
@property (nonatomic) BOOL titleRequired;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isMultipleSelected;
@property (copy, nonatomic) NSNumber *propertyID;
@property (retain, nonatomic) NSArray *valueIDs;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) long long style;
@property (readonly, nonatomic) BOOL isValid;
@property (copy, nonatomic) id /* block */ validateBlock;
@property (copy, nonatomic) NSString *placeHolder;
@property (copy, nonatomic) NSArray *value;
@property (nonatomic) long long type;
@property (nonatomic) long long stockReductionType;
@property (copy, nonatomic) NSNumber *maxLimit;
@property (copy, nonatomic) id /* block */ displayTextFormatter;
@property (readonly, copy, nonatomic) NSString *displayText;
@property (retain, nonatomic) NSArray *privilegeInfoArray;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSString *selectedValueID;
@property (retain, nonatomic) NSString *hintString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
