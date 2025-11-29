@class NSMutableArray;

@interface LocalSearchConfig : NSObject

@property (retain, nonatomic) NSMutableArray *arrClassConfig;

+ (id)getSharedDefaultConfig;
+ (void)genMainSearchContent:(id *)a0 andPinyinSearchContent:(id *)a1 withTarget:(id)a2;
+ (id)getContactMatchTypeConfig:(int)a0 withContact:(id)a1 isPinyin:(BOOL)a2;
+ (id)joinSearchContentFromArr:(id)a0 withSeperator:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
