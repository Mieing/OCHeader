@class NSString;

@interface AWESearchAIGCStorageData : NSObject <NSCoding>

@property (retain, nonatomic) id dataModel;
@property (retain, nonatomic) id renderModel;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) unsigned long long conversationRank;
@property (nonatomic) BOOL isQuestion;
@property (copy, nonatomic) NSString *searchID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
