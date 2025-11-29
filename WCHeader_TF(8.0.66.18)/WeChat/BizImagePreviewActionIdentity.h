@class NSString, NSNumber;

@interface BizImagePreviewActionIdentity : NSObject

@property (copy, nonatomic) NSString *headImg;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSNumber *identityType;
@property (copy, nonatomic) NSString *identityName;

+ (id)makeWithHeadImg:(id)a0 nickName:(id)a1 identityType:(id)a2 identityName:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
