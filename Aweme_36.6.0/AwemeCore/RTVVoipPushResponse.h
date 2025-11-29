@class NSString, RTVVoipModel, RTVVoipEventItem;
@protocol Optional;

@interface RTVVoipPushResponse : JSONModel

@property (copy, nonatomic) NSString<Optional> *sequenceID;
@property (copy, nonatomic) NSString<Optional> *callID;
@property (copy, nonatomic) NSString<Optional> *logID;
@property (readonly, nonatomic) RTVVoipModel *voip;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long receiveMethod;
@property (readonly, nonatomic) RTVVoipEventItem *event;

+ (id)keyMapper;
+ (id)modelCustomPropertyMapper;

- (id)initWithDictionary:(id)a0 traceInfo:(id)a1 receiveMethod:(long long)a2;
- (void)updateSequenceID:(id)a0;
- (id)initWithDictionary:(id)a0 receiveMethod:(long long)a1;
- (void).cxx_destruct;

@end
