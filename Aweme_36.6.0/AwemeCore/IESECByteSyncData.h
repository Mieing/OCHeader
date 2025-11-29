@class NSString, NSDictionary;

@interface IESECByteSyncData : NSObject

@property (retain, nonatomic) NSString *msgID;
@property (nonatomic) unsigned long long taskType;
@property (retain, nonatomic) NSDictionary *rawData;
@property (nonatomic) double validTime;
@property (nonatomic) unsigned long long settingsType;
@property (retain, nonatomic) NSDictionary *exp;

- (void).cxx_destruct;
- (id)description;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
