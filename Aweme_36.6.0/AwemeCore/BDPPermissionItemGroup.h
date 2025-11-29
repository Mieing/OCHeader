@class NSString, NSMutableArray;

@interface BDPPermissionItemGroup : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL inDefaultSection;
@property (nonatomic) BOOL shouldHideSection;

+ (id)defaultGroupWithItems:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
