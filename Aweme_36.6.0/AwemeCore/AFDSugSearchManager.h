@class NSString, NSRegularExpression, NSMutableCharacterSet, NSArray, NSMutableArray;

@interface AFDSugSearchManager : NSObject

@property (retain, nonatomic) NSMutableArray *preUserIDs;
@property (copy, nonatomic) NSString *currentKeyword;
@property (retain, nonatomic) NSRegularExpression *chineseRex;
@property (retain, nonatomic) NSMutableCharacterSet *specialCharacterSet;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long pageSize;
@property (readonly, nonatomic) NSArray *currentUserIDs;

- (id)buildParams;
- (BOOL)p_needSearchFirstLetter:(id)a0;
- (BOOL)p_needAppendAsterisk:(id)a0;
- (BOOL)p_needSearchPinyin:(id)a0;
- (void)searchWithKeyword:(id)a0 userList:(id)a1 completion:(id /* block */)a2;
- (void)searchWithKeyword:(id)a0 completion:(id /* block */)a1;
- (id)setupSugUserModelsWithUserList:(id)a0;
- (id)sugUserArrayByKeywords:(id)a0 sugUserModels:(id)a1 userList:(id)a2;
- (id)aweim_stringByContent:(id)a0 replacingBadCharacters:(id)a1 withString:(id)a2;
- (id)transChineseAllStringToPhoneticSpelling:(id)a0;
- (id)transChineseStringToPhoneticSpelling:(id)a0;
- (BOOL)isContainsByUserList:(id)a0 userID:(id)a1;
- (id)generateSpaceSplitedStringOf:(id)a0;
- (void).cxx_destruct;
- (id)keywords;
- (id)init;
- (void)reset;

@end
