@interface AWEIMFTSSearchOptimizeUtil : NSObject

+ (id)busTypes;
+ (id)extTypesDict;
+ (id)getSearchMsgContent:(id)a0;
+ (BOOL)searchMsgAvailable:(id)a0;
+ (BOOL)searchMsgCountAvailable:(id)a0;
+ (id)additionalMessageTypes;
+ (id)baseMessageTypes;
+ (id)defaultSearchableMessageTypes;
+ (BOOL)searchUserAvailable:(id)a0;
+ (id)createAdditionalMessageTypesArray;
+ (id)defaultPrefixDict;
+ (id)updateSearchText:(id)a0 withoutMarkedTextSpace:(id)a1;
+ (id)getPrefixStrWithMessage:(id)a0;

@end
