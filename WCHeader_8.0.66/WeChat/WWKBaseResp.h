@class NSString;

@interface WWKBaseResp : WWKBaseObject

@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errStr;

- (id)serializedDict;
- (BOOL)deserializeWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
