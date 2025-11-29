@class NSError, NSString, NSDictionary;

@interface AWENearbyGrouponPageInfo : NSObject

@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *pageId;
@property (copy, nonatomic) NSString *instanceId;
@property (copy, nonatomic) NSString *updateTime;
@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long sessionType;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *sourceData;
@property (retain, nonatomic) NSError *error;

- (id)errorWithCode:(long long)a0 msg:(id)a1;
- (id)initWithSourceData:(id)a0;
- (void)p_setData:(id)a0;
- (void)parseSourceData:(id)a0;
- (unsigned long long)sessionTypeFromSourceData:(id)a0;
- (void).cxx_destruct;

@end
