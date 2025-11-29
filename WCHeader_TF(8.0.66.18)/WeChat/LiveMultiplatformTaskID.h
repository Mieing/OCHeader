@class NSString;

@interface LiveMultiplatformTaskID : NSObject

@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *anchorFinderUsername;

+ (id)makeWithObjectID:(id)a0 anchorFinderUsername:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
