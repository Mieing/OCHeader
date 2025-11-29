@class NSString, NSArray;

@interface CSJAppInfo : NSObject <CSJActionAppModel, NSCoding>

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *downloadURL;
@property (nonatomic) double score;
@property (nonatomic) long long commentNum;
@property (nonatomic) long long appSize;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSArray *creativeTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setupBackupWith:(id)a0;
- (long long)defaultCommentNumValue;
- (double)defaultScoreValue;
- (void)setupDataWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
