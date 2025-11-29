@interface AWEStudioFeedbackRecorderParseUtil : NSObject

+ (id)jsonStringEncoded:(id)a0;
+ (id)parse:(id)a0 keyConfigBlock:(id /* block */)a1 handleItemBlock:(id /* block */)a2 sortBlock:(id /* block */)a3;
+ (id)jsonObjectDecoded:(id)a0;
+ (id)sortItems:(id)a0 usingSortedNameArray:(id)a1;

@end
