@class NSString;

@interface ContactInfoWrap : NSObject

@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *headImgUrl;
@property (copy, nonatomic) NSString *contactId;

+ (id)makeWithNickname:(id)a0 headImgUrl:(id)a1 contactId:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
