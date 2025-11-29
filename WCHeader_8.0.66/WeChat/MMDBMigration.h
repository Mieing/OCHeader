@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MMDBMigration : NSObject

@property unsigned int state;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *brandUserNames;
@property (retain, nonatomic) NSArray *userNames;
@property (nonatomic) BOOL createTableError;
@property (nonatomic) BOOL migrationAllFinish;

- (id)init;
- (void).cxx_destruct;

@end
