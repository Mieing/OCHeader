@interface IESECECTagError : NSError

+ (id)errorWithCode:(long long)a0 description:(id)a1;

- (id)errorMsg;
- (id)errorDesc;

@end
