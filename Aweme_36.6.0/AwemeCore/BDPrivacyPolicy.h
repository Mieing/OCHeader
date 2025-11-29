@class NSString;

@interface BDPrivacyPolicy : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSString *statement;
@property (copy, nonatomic) NSString *version;

- (id)initWithUUID:(id)a0 dataType:(id)a1 statement:(id)a2 version:(id)a3;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDict:(id)a0;

@end
