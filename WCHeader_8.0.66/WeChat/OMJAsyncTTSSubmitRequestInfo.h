@class NSString, NSDictionary;

@interface OMJAsyncTTSSubmitRequestInfo : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) unsigned long long format;
@property (readonly, nonatomic) float speed;
@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) NSString *submitID;
@property (readonly, nonatomic) NSDictionary *extraParams;

- (id)initWithText:(id)a0 model:(id)a1 format:(unsigned long long)a2 speed:(float)a3 volume:(float)a4;
- (id)initWithText:(id)a0 model:(id)a1 format:(unsigned long long)a2 speed:(float)a3 volume:(float)a4 submitID:(id)a5 extraParams:(id)a6;
- (void).cxx_destruct;

@end
