@class NSString;

@interface AFDPersonalRecommendWords : NSObject <AFDPersonalRecommendWordsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_onTextList;
+ (id)_offTextList;
+ (id)wordsWithKey:(id)a0;
+ (id)offWordsWithKey:(id)a0;


@end
