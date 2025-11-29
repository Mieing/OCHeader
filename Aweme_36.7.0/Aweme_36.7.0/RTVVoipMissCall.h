@class NSString, NSNumber;
@protocol Optional;

@interface RTVVoipMissCall : JSONModel

@property (copy, nonatomic) NSString<Optional> *userID;
@property (copy, nonatomic) NSString<Optional> *userSecID;
@property (nonatomic) long long voipType;
@property (retain, nonatomic) NSNumber<Optional> *bizType;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSNumber<Optional> *callTime;
@property (retain, nonatomic) NSNumber<Optional> *lastOnlineTimestamp;
@property (copy, nonatomic) NSString<Optional> *roomID;
@property (retain, nonatomic) NSNumber<Optional> *conShortID;

+ (id)keyMapper;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
