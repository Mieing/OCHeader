@class NSString, NSArray, NSDictionary;

@interface IESIMConvFloatingBarDataChangedContext : NSObject

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSArray *updatedUniqueIds;
@property (copy, nonatomic) NSArray *addedUniqueIds;
@property (copy, nonatomic) NSArray *deletedUniqueIds;
@property (copy, nonatomic) NSDictionary *typeToFloatingBarDynamicModelsDict;
@property (copy, nonatomic) NSDictionary *uniqueIdToFloatingBarDynamicModelDict;
@property (copy, nonatomic) NSDictionary *uniqueIdToUserBarDataModelsDict;

- (void).cxx_destruct;

@end
