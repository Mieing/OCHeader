@class NSString;

@interface BizPayAlbum : NSObject

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *digest;
@property (copy, nonatomic) NSString *headImgUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *webUrl;

+ (id)makeWithUserName:(id)a0 nickName:(id)a1 digest:(id)a2 headImgUrl:(id)a3 title:(id)a4 webUrl:(id)a5;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
