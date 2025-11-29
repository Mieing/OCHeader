@class NSError, NSString, NSDictionary;

@interface IESLiveFailEnterRoomModel : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *failApi;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) unsigned long long clientErrorCode;

- (id)initWithClientErrorCode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
