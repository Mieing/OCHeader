@class NSNumber, NSDictionary, NSString;

@interface AWEIMCreateGroupPageViewControllerModel : NSObject

@property (readonly, nonatomic) NSNumber *createSource;
@property (readonly, copy, nonatomic) NSDictionary *bizExtension;
@property (readonly, copy, nonatomic) NSString *enterMethod;
@property (readonly, copy, nonatomic) NSString *groupID;

- (id)initWithGroupCreateSource:(id)a0 enterMethod:(id)a1 bizExtension:(id)a2;
- (void).cxx_destruct;
- (void)updateGroupID:(id)a0;

@end
