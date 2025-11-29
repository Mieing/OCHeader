@class NSString, NSDictionary;

@interface FlowIMCocoError : NSError {
    void /* function */ msg;
    void /* function */ ext;
}

@property (nonatomic, readonly) NSString *msg;
@property (nonatomic, readonly) NSDictionary *ext;
@property (nonatomic, readonly) NSString *description;

- (id)init:(long long)a0 :(id)a1 :(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
