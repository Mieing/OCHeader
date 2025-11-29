@class NSString, NSMutableArray;

@interface MMCacheClassification : NSObject

@property (copy, nonatomic) NSString *classID;
@property (nonatomic) unsigned int classifyType;
@property (nonatomic) unsigned long long cacheSize;
@property (copy, nonatomic) id /* block */ cleanBlock;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSMutableArray *childClassification;

- (BOOL)isEqual:(id)a0;
- (id)classifyName;
- (void).cxx_destruct;

@end
