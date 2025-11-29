@class NSString, NSNumber;

@interface BizTempContactInfo : NSObject

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSNumber *isContact;
@property (retain, nonatomic) NSNumber *isPlaceTop;

+ (id)makeWithUserName:(id)a0 nickName:(id)a1 isContact:(id)a2 isPlaceTop:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
