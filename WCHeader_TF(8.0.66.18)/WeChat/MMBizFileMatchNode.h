@class NSString, NSMutableArray, NSDictionary;

@interface MMBizFileMatchNode : NSObject <NSCopying>

@property (nonatomic) unsigned long long m_matchType;
@property (retain, nonatomic) NSString *m_text;
@property (retain, nonatomic) NSMutableArray *m_arrBizMatchNode;
@property (retain, nonatomic) NSDictionary *m_dicTextBizMatchNode;
@property (retain, nonatomic) NSMutableArray *m_arrRegexBizMatchNode;
@property (nonatomic) long long m_bizType;
@property (nonatomic) int m_fileTypeInUse;
@property (nonatomic) int m_wechatFileClass;
@property (nonatomic) long long m_pathPrefixType;
@property (nonatomic) long long m_storeTimeType;

+ (id)nodeWithText:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isMarkBizFileNode;
- (BOOL)isBizRuleConflictWith:(id)a0;
- (BOOL)isMatchWithName:(id)a0;
- (id)description;
- (void)sortBizMatchNode;
- (void).cxx_destruct;

@end
