@class NSString, NSData;
@protocol DSMMatcherDelegate;

@interface DSMMatcher : NSObject

@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *modelPath;
@property (nonatomic) unsigned int groupCount;
@property (nonatomic) unsigned int keywordCount;
@property (nonatomic) unsigned int keywordMaxLen;
@property (retain, nonatomic) NSData *mmapData;
@property (nonatomic) char *kwm_data;
@property (nonatomic) unsigned int kwm_length;
@property (weak, nonatomic) id<DSMMatcherDelegate> delegate;

- (id)initWithModelPath:(id)a0 delegate:(id)a1 scene:(int)a2;
- (void)dealloc;
- (void)buildSearchModel;
- (BOOL)readModelFromFile;
- (BOOL)buildModelFromKeywords;
- (void)initMetaData;
- (unsigned int)initPretreat:(unsigned short *)a0;
- (BOOL)createKeywordModel;
- (void)fillKeywordModelData;
- (BOOL)writeKeywordModel;
- (int)search:(id)a0 location:(unsigned int)a1 result:(id)a2;
- (id)extractKeywords:(id)a0;
- (id)extractKeywords:(id)a0 maxSearchCount:(unsigned int)a1;
- (void).cxx_destruct;

@end
