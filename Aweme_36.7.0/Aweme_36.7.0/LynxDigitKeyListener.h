@class NSArray, NSString;

@interface LynxDigitKeyListener : LynxNumberKeyListener {
    BOOL _decimal;
    BOOL _sign;
}

@property (readonly, nonatomic) NSArray *CHARACTERS;
@property (nonatomic) NSString *mDecimalPointChars;
@property (nonatomic) NSString *mSignChars;

- (id)initWithParamsNeedsDecimal:(BOOL)a0 sign:(BOOL)a1;
- (id)filter:(id)a0 start:(long long)a1 end:(long long)a2 dest:(id)a3 dstart:(long long)a4 dend:(long long)a5;
- (id)getAcceptedChars;
- (void).cxx_destruct;
- (id)init;
- (long long)getInputType;

@end
