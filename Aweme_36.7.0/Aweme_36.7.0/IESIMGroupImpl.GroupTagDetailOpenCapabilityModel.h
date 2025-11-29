@class NSNumber, NSString;

@interface IESIMGroupImpl.GroupTagDetailOpenCapabilityModel : IESIMGroupOpenCapabilityModel {
    void /* function */ applicationId;
}

@property (nonatomic, retain) NSNumber *templateId;
@property (nonatomic, copy) NSString *applicationId;

- (id)initWithString:(id)a0 usingEncoding:(unsigned long long)a1 error:(id *)a2;
- (id)initFromURLWithString:(id)a0 completion:(id /* block */)a1;
- (id)initWithTarget:(id)a0 bizLine:(long long)a1 bizScene:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0 error:(id *)a1;

@end
