@class NSString, AFDLocalDataTableRowModel, AFDLocalDataCommandModel;

@interface AFDLocalDataMessageModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSString *tableMessageID;
@property (retain, nonatomic) AFDLocalDataTableRowModel *rowModel;
@property (retain, nonatomic) AFDLocalDataCommandModel *commandModel;

+ (id)rowModelJSONTransformer;
+ (id)commandModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
