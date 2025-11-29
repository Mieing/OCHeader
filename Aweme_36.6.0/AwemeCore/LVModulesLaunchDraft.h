@class NSString, NSMutableArray;

@interface LVModulesLaunchDraft : NSObject

@property (copy, nonatomic) NSString *draftID;
@property (copy, nonatomic) NSString *create_time;
@property (retain, nonatomic) NSMutableArray *items;

- (id)modelToJson;
- (void).cxx_destruct;
- (id)init;

@end
