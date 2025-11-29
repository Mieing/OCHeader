@class NSString, NSArray;

@interface AWEIMGroupSpeakPermissionSectionModel : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *cellModels;
@property (copy, nonatomic) NSString *reuseHeaderViewIdentifier;
@property (copy, nonatomic) NSString *reuseFooterViewIdentifier;
@property (nonatomic) BOOL sectionCornerRadius;

- (id)initWithIdentifier:(id)a0 cellModels:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
