@class NSString;

@interface AWESolariaNearLineSessionItem : AWESolariaNearLineBaseInfoItem

@property (copy, nonatomic) NSString *sessionId;

- (void)fromJSON:(id)a0;
- (id)toSessionInfo;
- (void).cxx_destruct;
- (id)init;
- (id)toJSON;

@end
