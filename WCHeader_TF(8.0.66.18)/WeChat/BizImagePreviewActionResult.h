@class NSNumber, NSString, NSArray;

@interface BizImagePreviewActionResult : NSObject

@property (retain, nonatomic) NSNumber *curIdentityType;
@property (copy, nonatomic) NSString *curIdentityName;
@property (retain, nonatomic) NSNumber *followStatus;
@property (copy, nonatomic) NSArray *actions;

+ (id)makeWithCurIdentityType:(id)a0 curIdentityName:(id)a1 followStatus:(id)a2 actions:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
