@class NSString, NSArray;

@interface MMLiveQcPollQuestion : NSObject

@property (retain, nonatomic) NSString *questionId;
@property (retain, nonatomic) NSString *uniqueKey;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *stem;
@property (retain, nonatomic) NSArray *options;

+ (id)questionWithId:(unsigned long long)a0 fromBackendModels:(id)a1;

- (void).cxx_destruct;

@end
