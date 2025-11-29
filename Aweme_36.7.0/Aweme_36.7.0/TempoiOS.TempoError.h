@class NSString;

@interface TempoiOS.TempoError : NSObject {
    void /* function */ desc;
    void /* function */ reason;
    void /* function */ suggestion;
    void /* function */ help;
}

@property (nonatomic) long long code;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *suggestion;
@property (nonatomic, copy) NSString *help;
@property (nonatomic, readonly) NSString *errorDescription;
@property (nonatomic, readonly) NSString *failureReason;
@property (nonatomic, readonly) NSString *recoverySuggestion;
@property (nonatomic, readonly) NSString *helpAnchor;

- (id)initWithCode:(long long)a0 desc:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
