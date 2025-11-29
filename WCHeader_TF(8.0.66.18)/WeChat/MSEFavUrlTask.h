@class NSString;

@interface MSEFavUrlTask : NSObject <PBCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *contentUrl;
@property (retain, nonatomic) NSString *taskID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_contentUrl;
+ (void)PBArrayAdd_taskID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
