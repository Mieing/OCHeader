@class NSString;

@interface BizTextCoverInfo : NSObject

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *coverId;

+ (id)makeWithPrompt:(id)a0 coverUrl:(id)a1 coverId:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
