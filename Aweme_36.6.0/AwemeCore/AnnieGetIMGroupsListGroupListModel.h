@class NSString, NSNumber;

@interface AnnieGetIMGroupsListGroupListModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *number;
@property (copy, nonatomic) NSString *avatar;
@property (nonatomic) BOOL isGroup;
@property (copy, nonatomic) NSString *type;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
