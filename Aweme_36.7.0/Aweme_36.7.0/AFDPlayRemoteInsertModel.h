@class NSString, AWEAwemeModel;

@interface AFDPlayRemoteInsertModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *insertedAwemeID;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSString *awemeIDs;
@property (readonly, nonatomic) long long awemeType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithInsertedAwemeID:(id)a0 type:(long long)a1 index:(long long)a2;
- (long long)compareInsertModel:(id)a0;
- (void).cxx_destruct;

@end
